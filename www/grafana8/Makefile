PORTNAME=	grafana
DISTVERSIONPREFIX=	v
DISTVERSION=	8.1.7
CATEGORIES=	www
MASTER_SITES+=	https://dl.grafana.com/oss/release/:public \
		https://gitea.com/xorm/builder/archive/:builder \
		https://gitea.com/xorm/core/archive/:core \
		https://gitea.com/xorm/xorm/archive/:xorm
PKGNAMESUFFIX=	${PORTVERSION:C/([0-9]).*/\1/1}
DISTFILES=	grafana-${PORTVERSION}.linux-amd64${EXTRACT_SUFX}:public \
		v0.3.6${EXTRACT_SUFX}:builder \
		v0.7.3${EXTRACT_SUFX}:core \
		v0.8.2${EXTRACT_SUFX}:xorm

MAINTAINER=	drtr0jan@yandex.ru
COMMENT=	Dashboard and graph editor for multiple data stores

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64 i386

RUN_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		cpe go:modules

USE_GITHUB=	yes

USE_RC_SUBR=	grafana
TAG=		34b8880

GO_TARGET=	./pkg/cmd/grafana-cli ./pkg/cmd/grafana-server
GO_BUILDFLAGS=	-ldflags="-w -X main.version=${PORTVERSION} -X main.commit=${TAG}"

SUB_LIST=	GRAFANA_BUILDHASH=8037849dbb02d3339929 \
		GRAFANA_DATADIR=${GRAFANA_DATADIR} \
		GRAFANA_GROUP=${GRAFANA_GROUP} \
		GRAFANA_HOMEDIR=${GRAFANA_HOMEDIR} \
		GRAFANA_LOGDIR=${GRAFANA_LOGDIR} \
		GRAFANA_PLUGINDIR=${GRAFANA_PLUGINDIR} \
		GRAFANA_PROVISIONINGDIR=${GRAFANA_PROVISIONINGDIR} \
		GRAFANA_USER=${GRAFANA_USER}

GRAFANA_USER?=	grafana
GRAFANA_GROUP?=	grafana

USERS=		${GRAFANA_USER}
GROUPS=		${GRAFANA_GROUP}

PLIST_SUB=	${SUB_LIST}

GRAFANA_DATADIR?=		/var/db/${PORTNAME}
GRAFANA_HOMEDIR?=		${DATADIR}
GRAFANA_LOGDIR?=		/var/log/${PORTNAME}
GRAFANA_PLUGINDIR?=		${GRAFANA_DATADIR}/plugins
GRAFANA_PROVISIONINGDIR?=	${ETCDIR}/provisioning

# This file includes the GH_TUPLE. Generated by make gomod-vendor.
.include "Makefile.modules"

post-extract:
	@${RM} -r ${WRKSRC}/public
	@(cd ${WRKDIR} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} ${DISTDIR}/grafana-${PORTVERSION}.linux-amd64${EXTRACT_SUFX} ${EXTRACT_AFTER_ARGS} grafana-${PORTVERSION}/public)
	@(cd ${WRKDIR} && ${MKDIR} ${WRKSRC}/vendor/xorm.io && ${MV} builder ${WRKSRC}/vendor/xorm.io/ && ${MV} core ${WRKSRC}/vendor/xorm.io/ && ${MV} xorm ${WRKSRC}/vendor/xorm.io/)

post-install:
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_HOMEDIR}/conf
	${MKDIR} ${STAGEDIR}${GRAFANA_DATADIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_PLUGINDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}/access-control
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}/dashboards
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}/datasources
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}/notifiers
	${MKDIR} ${STAGEDIR}${GRAFANA_PROVISIONINGDIR}/plugins
	${MKDIR} ${STAGEDIR}${GRAFANA_LOGDIR}
	( cd ${WRKSRC} && \
		${COPYTREE_SHARE} public ${STAGEDIR}${GRAFANA_HOMEDIR} )
	${INSTALL_DATA} ${WRKSRC}/conf/defaults.ini \
		${STAGEDIR}${GRAFANA_HOMEDIR}/conf/defaults.ini

	${REINPLACE_CMD} \
		-e 's|;data = /var/lib/grafana|data = ${GRAFANA_DATADIR}|g' \
		-e 's|;logs = /var/log/grafana|logs = ${GRAFANA_LOGDIR}|g' \
		-e 's|;plugins = /var/lib/grafana/plugins|plugins = ${GRAFANA_PLUGINDIR}|g' \
		-e 's|;provisioning = conf/provisioning|provisioning = ${GRAFANA_PROVISIONINGDIR}|g' \
		 ${WRKSRC}/conf/sample.ini
	${INSTALL_DATA} ${WRKSRC}/conf/sample.ini ${STAGEDIR}${ETCDIR}/grafana.ini.sample

.include <bsd.port.mk>

# Created by: Herve Quiroz <hq@FreeBSD.org>

PORTNAME=	maven31
DISTVERSION=	3.1.1
PORTREVISION=	2
CATEGORIES=	devel java
MASTER_SITES=	APACHE/maven/binaries
DISTNAME=	apache-maven-${DISTVERSION}-bin

MAINTAINER=	yerenkow@gmail.com
COMMENT=	Java project management tool, 3.1.x branch

LICENSE=	APACHE20

DEPRECATED=	Outdated, unsupported upstream
EXPIRATION_DATE=2022-01-15

RUN_DEPENDS=	mvn:devel/maven-wrapper

USES=		cpe
CPE_PRODUCT=	maven
CPE_VENDOR=	apache

USE_JAVA=	yes
NO_BUILD=	yes
DATADIR=	${JAVASHAREDIR}/${PORTNAME}
WRKSRC=		${WRKDIR}/apache-maven-${DISTVERSION}
SUB_FILES=	mvn.sh
SUB_LIST=	CLASSWORLDS_JAR=plexus-classworlds-2.5.1.jar
INSTANCE_FILE=	030101-${PORTNAME}-${PORTVERSION}
INSTANCES_DIR=	etc/maven-wrapper/instances.d/

post-extract:
	${RM} ${WRKSRC}/bin/*.bat
	${ECHO_CMD} "${DATADIR}" > ${WRKSRC}/${INSTANCE_FILE}

do-install:
	cd ${WRKSRC} && ${FIND} . -type d -exec ${MKDIR} ${STAGEDIR}${DATADIR}/{} \;
	cd ${WRKSRC} && ${FIND} . -type f -not -path "\./bin/" -exec ${INSTALL_DATA} {} ${STAGEDIR}${DATADIR}/{} \;
	${INSTALL_DATA} ${WRKSRC}/bin/m2.conf ${STAGEDIR}${DATADIR}/bin/
	${INSTALL_SCRIPT} ${WRKDIR}/mvn.sh ${STAGEDIR}${DATADIR}/bin/mvn
	${MKDIR} ${STAGEDIR}${PREFIX}/${INSTANCES_DIR}
	${INSTALL_DATA} ${WRKSRC}/${INSTANCE_FILE} ${STAGEDIR}${PREFIX}/${INSTANCES_DIR}

.include <bsd.port.mk>

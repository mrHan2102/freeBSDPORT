PORTNAME=	etcd
PORTVERSION=	2.3.8
DISTVERSIONPREFIX=	v
PORTREVISION=	6
CATEGORIES=	devel
PKGNAMEPREFIX=	coreos-

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Highly-available key value store and service discovery

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cpe go
USE_GITHUB=	yes
GH_ACCOUNT=	coreos

GO_PKGNAME=	github.com/coreos/etcd
GO_TARGET=	github.com/coreos/etcd github.com/coreos/etcd/etcdctl

CONFLICTS_INSTALL=	coreos-etcd31-* coreos-etcd32-* coreos-etcd33-* \
			coreos-etcd34-* coreos-etcdctl-0.*

PORTSCOUT=	limit:^2.*

PLIST_FILES=	bin/etcd \
		bin/etcdctl
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS
DOCS_DESC=	Install etcd README file

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

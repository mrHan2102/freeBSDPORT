PORTNAME=	tttcmds
PORTVERSION=	1.0.20190920
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc

MAINTAINER=	daichi@FreeBSD.org
COMMENT=	Unix-style data processing commands and library

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 powerpc64 powerpc64le

CONFLICTS_INSTALL=	open-usp-tukubai

USE_GITHUB=	yes
GH_ACCOUNT=	daichigoto
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

PORTNAME=	elfcat
DISTVERSION=	0.1.8
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	ELF visualizer, generates HTML files from ELF binaries

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/license

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	ruslashev

PLIST_FILES=	bin/elfcat

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/elfcat

.include <bsd.port.mk>

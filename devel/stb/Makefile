PORTNAME=	stb
PORTVERSION=	g20200205
CATEGORIES=	devel

MAINTAINER=	yuri@rawbw.com
COMMENT=	Stb single-file public domain libraries for C/C++

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cpe
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	nothings
GH_TAGNAME=	f54acd4

NO_BUILD=	yes
NO_ARCH=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/${PORTNAME}
	cd ${WRKSRC} && ${INSTALL_DATA} *.c *.h ${STAGEDIR}${PREFIX}/include/${PORTNAME}

.include <bsd.port.mk>

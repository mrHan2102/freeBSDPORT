# Created by: Alexander Vereeken <Alexander88207@protonmail.com>

PORTNAME=	flatery-icon-themes
DISTVERSION=	2021-09-08
CATEGORIES=	x11-themes

MAINTAINER=	Alexander88207@protonmail.com
COMMENT=	Flatery is an icon theme for linux in flat style

LICENSE=	CC-BY-NC-SA-3.0

USE_GITHUB=	yes

GH_ACCOUNT=	cbrnix
GH_PROJECT=	Flatery
GH_TAGNAME=	d96f58c
NO_ARCH=	yes
NO_BUILD=	yes

post-patch:
	${RM} ${WRKSRC}/.directory \
	${WRKSRC}/README.md \
	${WRKSRC}/install.sh \
	${WRKSRC}/cover.png
do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons
	${CP} -R ${WRKSRC}/* ${STAGEDIR}${PREFIX}/share/icons

.include <bsd.port.mk>

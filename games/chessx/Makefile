PORTNAME=	chessx
PORTVERSION=	1.5.6
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qt 5 chess database application

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lang desktop-file-utils gl gmake qmake qt:5 tar:tgz
USE_GL=		gl
USE_QT=		concurrent core gui multimedia network opengl printsupport svg \
		widgets xml buildtools_build linguisttools_build speech

PLIST_FILES=	bin/chessx \
		share/applications/chessx.desktop \
		share/pixmaps/chessx.png

OPTIONS_DEFINE=	CRAFTY STOCKFISH

CRAFTY_DESC=	Install Crafty Chess Application
STOCKFISH_DESC=	Install Stockfish Chess Engine

CRAFTY_RUN_DEPENDS=	crafty:games/crafty
STOCKFISH_RUN_DEPENDS=	stockfish:games/stockfish

post-configure:
	( cd ${BUILD_WRKSRC} && ${LRELEASE} ${WRKSRC}/${PORTNAME}.pro )

.include <bsd.port.mk>

PORTNAME=	hexalate
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	https://gottcode.org/${PORTNAME}/ \
		https://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Color matching game

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lib gl gnome qmake qt:5 tar:bzip2
USE_QT=		core gui widgets buildtools_build linguisttools_build
USE_GL=		gl

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>

PORTNAME=	photoflare
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.8
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Quick, simple but powerful cross-platform image editor

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libGraphicsMagick++.so:graphics/GraphicsMagick

USES=		desktop-file-utils gl qmake qt:5 localbase pkgconfig
USE_GITHUB=	yes
USE_QT=		core gui network printsupport widgets buildtools_build linguisttools_build
USE_GL=		gl

CXXFLAGS+=	`pkg-config --cflags GraphicsMagick++`
LDFLAGS+=	`pkg-config --libs GraphicsMagick++` ${LDFLAGS_${CHOSEN_COMPILER_TYPE}}
LDFLAGS_clang=	-lomp
LDFLAGS_gcc=	-fopenmp

.include <bsd.port.options.mk>

.if ${ARCH} == armv7 || ${ARCH} == powerpc
USES+=		compiler:gcc-c++11-lib
.else
USES+=		compiler:c++17-lang
.endif

.include <bsd.port.mk>

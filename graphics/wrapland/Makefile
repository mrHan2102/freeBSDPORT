PORTNAME=	wrapland
DISTVERSIONPREFIX=	${PORTNAME}@
DISTVERSION=	0.523.1
CATEGORIES=	graphics

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Qt/C++ library wrapping libwayland

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
		wayland-protocols>=1.22:graphics/wayland-protocols
LIB_DEPENDS=	libwayland-client.so:graphics/wayland
TEST_DEPENDS=	${qt-testlib_PORT:T}>0:${qt-testlib_PORT}

USES=		cmake:testing gl kde:5 pkgconfig qt:5
USE_GITLAB=	yes
USE_GL=		egl
USE_KDE=	ecm_build
USE_LDCONFIG=	yes
USE_QT=		qmake_build buildtools_build concurrent core gui
GL_ACCOUNT=	kwinft
GL_COMMIT=	6a083c7bc9b37c5f756155e258b1fff4d24cea2a
PLIST_SUB=	VERSION=${PORTVERSION}

OPTIONS_DEFINE=	DOXYGEN
OPTIONS_DEFAULT=DOXYGEN
OPTIONS_SUB=	yes

DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen
DOXYGEN_USE=		QT=help_build
DOXYGEN_CMAKE_BOOL=	BUILD_QCH

.include <bsd.port.mk>

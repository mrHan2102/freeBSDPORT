PORTNAME=	kwayland-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Integration plugins for a Wayland-based desktop

LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
		libwayland-client.so:graphics/wayland
BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto \
		wayland-protocols>0:graphics/wayland-protocols

USES=		cmake compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm guiaddons idletime plasma-wayland-protocols wayland windowsystem
USE_QT=		core gui widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>

PORTNAME=	lxqt-powermanagement
PORTVERSION=	1.0.0
CATEGORIES=	sysutils
MASTER_SITES=	LXQT

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	LXQt power management

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	upower:sysutils/upower

USES=	cmake compiler:c++14-lang gettext-runtime kde:5 qt:5 \
	localbase:ldflags lxqt pkgconfig tar:xz gnome xorg
USE_QT=	buildtools_build qmake_build core svg widgets x11extras \
	dbus gui xml
USE_GNOME=	glib20
USE_KDE=	idletime solid windowsystem
USE_LXQT=	buildtools lxqt globalkeys
USE_XORG=	x11
.include <bsd.port.mk>

PORTNAME=	kdisplay
DISTVERSIONPREFIX=	${PORTNAME}@
DISTVERSION=	5.23.0
CATEGORIES=	x11

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	App and daemon for display managing

LICENSE=	GPLv2+ LGPL21+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21+ =	${WRKSRC}/COPYING.LGPL

LIB_DEPENDS=	libDisman.so:x11/disman
TEST_DEPENDS=	${qt-testlib_PORT:T}>0:${qt-testlib_PORT}

USES=		cmake:testing kde:5 qt:5
USE_GITLAB=	yes
USE_KDE=	ecm_build config coreaddons dbusaddons globalaccel i18n \
		kcmutils kdeclarative plasma-framework xmlgui
USE_LDCONFIG=	yes
USE_QT=		qmake_build buildtools_build core dbus declarative gui \
		sensors widgets
GL_ACCOUNT=	kwinft
GL_COMMIT=	b64cf06bf9945b550a965126c750440a6617e4ef
PLIST_SUB=	VERSION=${PORTVERSION}
LDFLAGS+=	-Wl,--as-needed # Qt5*, KF5*

.include <bsd.port.mk>

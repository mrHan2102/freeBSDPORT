# Created by: trasz <trasz@pin.if.uz.zgora.pl>

PORTNAME=	qjackctl
DISTVERSIONPREFIX=	qjackctl_
DISTVERSION=	0_9_5
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Qt interface for JACK Audio Connection Kit

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libjack.so:audio/jack

USES=		autoreconf compiler:c++11-lib gl gmake localbase pkgconfig qt:5
USE_QT=		core gui network widgets x11extras xml buildtools_build linguisttools_build qmake_build
USE_GL=		gl
USE_CXXSTD=	c++11
USE_GCC=	yes # workaround for https://sourceforge.net/p/qjackctl/tickets/57/

USE_GITHUB=	yes
GH_ACCOUNT=	rncbc

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-jack_version

BINARY_ALIAS=	qmake=${QMAKE}

OPTIONS_DEFINE=		DBUS SYSTRAY XUNIQUE
OPTIONS_DEFAULT=	DBUS SYSTRAY XUNIQUE
OPTIONS_GROUP=		AIFACE
OPTIONS_GROUP_AIFACE=	ALSA PORTAUDIO

AIFACE_DESC=		Other audio interfaces
SYSTRAY_DESC=		System tray icon support
XUNIQUE_DESC=		X11 unique/single instance

ALSA_CONFIGURE_ENABLE=	alsa_seq
ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib

DBUS_CONFIGURE_ENABLE=	dbus
DBUS_USE=		QT=dbus

PORTAUDIO_CONFIGURE_ENABLE=	portaudio
PORTAUDIO_LIB_DEPENDS=	libportaudio.so:audio/portaudio

SYSTRAY_CONFIGURE_ENABLE=	system-tray

XUNIQUE_CONFIGURE_ENABLE=	xunique
XUNIQUE_USES=			xorg
XUNIQUE_USE=			XORG=x11

.include <bsd.port.mk>

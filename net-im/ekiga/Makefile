# Created by: Charlie & <root@ws.ipfw.ru>
#    $MCom: ports/trunk/net-im/ekiga/Makefile 19954 2014-10-15 10:03:57Z kwm $

PORTNAME=	ekiga
PORTVERSION=	4.0.1
PORTREVISION=	31
CATEGORIES=	net-im
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	VoIP and video conferencing application

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Last release in 2013, not actively maintained
EXPIRATION_DATE=	2021-12-31

BUILD_DEPENDS=	boost-libs>=1.53:devel/boost-libs \
		v4l_compat>=0:multimedia/v4l_compat \
		gnome-icon-theme>=3.0.0:misc/gnome-icon-theme
LIB_DEPENDS=	libopal.so:net/opal \
		libv4l2.so:multimedia/libv4l
RUN_DEPENDS=	gnome-icon-theme>=3.0.0:misc/gnome-icon-theme

GNU_CONFIGURE=	yes
USES=		compiler:c++11-lang cpe gettext gmake gnome libtool localbase \
		pathfix pkgconfig tar:xz xorg
USE_XORG=	xv
USE_GNOME=	gtk20 intlhack libxml2
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-I${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	LDAP NOTIFY EVOLUTION DBUS AVAHI GNOMEHELP
OPTIONS_DEFAULT=NOTIFY DBUS AVAHI

EVOLUTION_DESC=	Evolution data server support
GNOMEHELP_DESC=	Build Ekiga help files

#OPTIONS_GROUP=	EXP
#OPTIONS_GROUP_EXP=	XCAP LOUDMOUTH
EXP_DESC=	Experimental features
XCAP_DESC=	Remote contact storage via HTTP in xml format
LOUDMOUTH_DESC=	XMPP (jabber) support

# Note that h.323 support is enabled when opal is build with it.

.include <bsd.port.options.mk>

PLIST_SUB+=	VERSION=${PORTVERSION}

CONFIGURE_ARGS+=--disable-kde --disable-kab --disable-gstreamer \
		--disable-gconf

.if ${PORT_OPTIONS:MXCAP}
CONFIGURE_ARGS+=--enable-xcap
LIB_DEPENDS+=	libsoup-2.4.so:devel/libsoup
.else
CONFIGURE_ARGS+=--disable-xcap
.endif

.if ${PORT_OPTIONS:MLOUDMOUTH}
CONFIGURE_ARGS+=--enable-loudmouth
LIB_DEPENDS+=	libloudmouth-1.so:net-im/loudmouth
.else
CONFIGURE_ARGS+=--disable-loudmouth
.endif

.if ${PORT_OPTIONS:MLDAP}
USE_OPENLDAP=	yes
LIB_DEPENDS+=	libsasl2.so:security/cyrus-sasl2
CONFIGURE_ARGS+=--enable-ldap --with-ldap-dir="${LOCALBASE}" --with-libsasl2-dir="${LOCALBASE}"
PLIST_SUB+=	LDAP=""
WITH_PLUGINS=	1
.else
CONFIGURE_ARGS+=--disable-ldap
PLIST_SUB+=	LDAP="@comment "
.endif

.if defined(WITH_PLUGINS)
PLIST_SUB+=	PLUGINS=""
.else
PLIST_SUB+=	PLUGINS="@comment "
.endif

.if ${PORT_OPTIONS:MNOTIFY}
LIB_DEPENDS+=	libnotify.so:devel/libnotify
CONFIGURE_ARGS+=--enable-notify
PLIST_SUB+=	NOTIFY=""
WITH_PLUGINS=	1
.else
CONFIGURE_ARGS+=--disable-notify
PLIST_SUB+=	NOTIFY="@comment "
.endif

.if ${PORT_OPTIONS:MDBUS}
LIB_DEPENDS+=	libdbus-1.so:devel/dbus
CONFIGURE_ARGS+=--enable-dbus --enable-dbus-service
PLIST_SUB+=	DBUS=""
.else
CONFIGURE_ARGS+=--disable-dbus --disable-dbus-service
PLIST_SUB+=	DBUS="@comment "
.endif

.if ${PORT_OPTIONS:MEVOLUTION}
USE_GNOME+=	evolutiondataserver3
LIB_DEPENDS+=	libgcr-base-3.so:security/gcr
CONFIGURE_ARGS+=--enable-eds
PLIST_SUB+=	EVOLUTION=""
WITH_PLUGINS=	1
.else
CONFIGURE_ARGS+=--disable-eds
PLIST_SUB+=	EVOLUTION="@comment "
.endif

.if ${PORT_OPTIONS:MAVAHI}
CONFIGURE_ARGS+=--enable-avahi
LIB_DEPENDS+=	libavahi-client.so:net/avahi-app
PLIST_SUB+=	AVAHI=""
WITH_PLUGINS=	1
.else
CONFIGURE_ARGS+=--disable-avahi
PLIST_SUB+=	AVAHI="@comment "
.endif

.if ${PORT_OPTIONS:MGNOMEHELP}
INSTALLS_OMF=	yes
PLIST_SUB+=	GNOMEHELP=""
USE_GNOME+=	gnomedocutils
.else
CONFIGURE_ARGS+=--disable-gdu
PLIST_SUB+=	GNOMEHELP="@comment "
.endif

.include <bsd.port.mk>

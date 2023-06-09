# Created by: Koop Mast <kwm@FreeBSD.org>

PORTNAME=	gnome-settings-daemon
PORTVERSION=	3.38.2
CATEGORIES=	sysutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

PATCH_SITES=	https://gitlab.gnome.org/GNOME/${PORTNAME}/-/commit/
PATCHFILES+=	28e28e9e5983.patch:-p1 # meson >= 0.60

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 settings daemon

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
		libcanberra-gtk3.so:audio/libcanberra-gtk3 \
		libpolkit-gobject-1.so:sysutils/polkit \
		libfontconfig.so:x11-fonts/fontconfig \
		libcolord.so:graphics/colord \
		liblcms2.so:graphics/lcms2 \
		libpulse.so:audio/pulseaudio \
		libnotify.so:devel/libnotify \
		libgeoclue-2.so:net/geoclue \
		libupower-glib.so:sysutils/upower \
		libgeocode-glib.so:net/geocode-glib \
		libgweather-3.so:net/libgweather \
		libcups.so:print/cups \
		libnss3.so:security/nss \
		libnspr4.so:devel/nspr

PORTSCOUT=	limitw:1,even

USE_XORG=	x11 xext xi xtst
USE_GNOME=	cairo gnomedesktop3 gtk30
USES=		gettext gnome localbase:ldflags meson perl5 \
		pkgconfig python:3.6+,build tar:xz xorg
USE_PERL5=	build
#		-Dnssdb_dir=${LOCALBASE}/share/certs/ca-root-nss.crt
MESON_ARGS=	-Dnssdb_dir=${LOCALBASE}/share/certs/ \
		-Dalsa=false \
		-Drfkill=false \
		-Dnetwork_manager=false \
		-Dsystemd=false \
		-Dwwan=false \
		-Dcups=true \
		-Dsmartcard=true
BINARY_ALIAS=	python3=${PYTHON_VERSION}

# wayland doesn't build yet, undefined symbol
MESON_ARGS+=	-Dwayland=false -Dgudev=false
#WAYLAND_MESON_TRUE=	wayland gudev
#WAYLAND_LIB_DEPENDS=	libgudev-1.0.so:devel/libgudev \
#			libwayland-client.so:graphics/wayland

GLIB_SCHEMAS=	org.gnome.settings-daemon.enums.xml \
		org.gnome.settings-daemon.peripherals.gschema.xml \
		org.gnome.settings-daemon.peripherals.wacom.gschema.xml \
		org.gnome.settings-daemon.plugins.color.gschema.xml \
		org.gnome.settings-daemon.plugins.gschema.xml \
		org.gnome.settings-daemon.plugins.housekeeping.gschema.xml \
		org.gnome.settings-daemon.plugins.media-keys.gschema.xml \
		org.gnome.settings-daemon.plugins.power.gschema.xml \
		org.gnome.settings-daemon.plugins.power.gschema.xml.override \
		org.gnome.settings-daemon.plugins.sharing.gschema.xml \
		org.gnome.settings-daemon.plugins.xsettings.gschema.xml

post-install:
	${INSTALL_DATA} ${FILESDIR}/org.gnome.settings-daemon.plugins.power.gschema.xml.override \
		${STAGEDIR}${PREFIX}/share/glib-2.0/schemas/

.include <bsd.port.mk>

# Created by: Jos� Garc�a Juanino <jjuanino@gmail.com>

PORTNAME=	purple-hangouts
PORTVERSION=	20190607
PORTREVISION=	1
CATEGORIES=	net-im
MASTER_SITES=	https://bitbucket.org/EionRobb/${PORTNAME}/get/
# Commit tag. Must be changed according with PORTVERSION.
DISTNAME=	3f7d89bf9ce2

MAINTAINER=	jjuanino@gmail.com
COMMENT=	Hangouts plugin for libpurple

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/gpl3.txt

LIB_DEPENDS=	libpurple.so:net-im/libpurple \
		libjson-glib-1.0.so:devel/json-glib \
		libprotobuf-c.so:devel/protobuf-c

USES=		gmake gnome pkgconfig zip
USE_GNOME=	glib20
PATCH_STRIP=	-p1 --ignore-whitespace

WRKSRC=		${WRKDIR}/EionRobb-${PORTNAME}-${DISTNAME}

OPTIONS_DEFINE=	NLS

NLS_USES=	gettext
USE_LDCONFIG=	yes

PLIST_FILES=	lib/purple-2/libhangouts.so \
		share/pixmaps/pidgin/protocols/16/hangouts.png \
		share/pixmaps/pidgin/protocols/22/hangouts.png \
		share/pixmaps/pidgin/protocols/48/hangouts.png

post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/lib/purple-2/libhangouts.so

.include <bsd.port.mk>

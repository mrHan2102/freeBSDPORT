# Created by: Yuri Victorovich <yuri@rawbw.com>

PORTNAME=	opendht
DISTVERSION=	1.10.1
PORTREVISION=	4
CATEGORIES=	devel net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight Distributed Hash Table implementation

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libargon2.so:security/libargon2 \
		libjsoncpp.so:devel/jsoncpp \
		libmsgpackc.so:devel/msgpack \
		libnettle.so:security/nettle \
		libgnutls.so:security/gnutls

USES=		cmake compiler:c++11-lib pathfix pkgconfig readline
USE_GITHUB=	yes
GH_ACCOUNT=	savoirfairelinux
USE_LDCONFIG=	yes

CMAKE_OFF=	OPENDHT_STATIC

PLIST_SUB=	SHL3=${PORTVERSION} SHL1=${PORTVERSION:R:R}

OPTIONS_DEFINE=	PROXY_SERVER PROXY_CLIENT PUSH_NOTIFICATIONS DOCS

PROXY_SERVER_DESC=		Enable DHT proxy server
PROXY_CLIENT_DESC=		Enable DHT proxy client
PUSH_NOTIFICATIONS_DESC=	Enable push notifications support

PROXY_SERVER_CMAKE_BOOL=	OPENDHT_PROXY_SERVER
PROXY_CLIENT_CMAKE_BOOL=	OPENDHT_PROXY_CLIENT
PUSH_NOTIFICATIONS_CMAKE_BOOL=	OPENDHT_PUSH_NOTIFICATIONS

PROXY_SERVER_LIB_DEPENDS=	libjsoncpp.so:devel/jsoncpp \
				librestbed.so:www/restbed

PORTDOCS=	*

.include <bsd.port.mk>

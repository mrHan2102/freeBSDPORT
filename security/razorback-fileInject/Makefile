# Created by: Tom Judge <tom@tomjudge.com>

PORTNAME=	fileInject
PORTVERSION=	0.5.0
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	SF/razorbacktm/Nuggets
PKGNAMEPREFIX=	razorback-
DIST_SUBDIR=	razorback

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Framework for an intelligence driven security - File Injector

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Abandonware, last release in 2012 and listed as alpha quality by upstream
EXPIRATION_DATE=2022-03-31

LIB_DEPENDS=	librazorback_api.so:security/razorback-api \
		libjson-c.so:devel/json-c

OPTIONS_DEFINE=	DEBUG ASSERT

GNU_CONFIGURE=	yes
USES=		autoreconf pkgconfig libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

DEBUG_CONFIGURE_ENABLE=	debug
ASSERT_CONFIGURE_ENABLE=assert

.include <bsd.port.mk>

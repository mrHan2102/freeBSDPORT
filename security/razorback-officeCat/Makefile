# Created by: Tom Judge <tom@tomjudge.com>

PORTNAME=	officeCat
PORTVERSION=	0.5.0
PORTREVISION=	6
CATEGORIES=	security
MASTER_SITES=	SF/razorbacktm/Nuggets
PKGNAMEPREFIX=	razorback-
DIST_SUBDIR=	razorback

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Framework for an intelligence driven security - OfficeCat Detection

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Abandonware, last release in 2012 and listed as alpha quality by upstream
EXPIRATION_DATE=2022-03-31

LIB_DEPENDS=	librazorback_api.so:security/razorback-api \
		libjson-c.so:devel/json-c
BUILD_DEPENDS=	razorback-masterNugget>=0.5.0:security/razorback-masterNugget \
		wine:emulators/wine
RUN_DEPENDS=	razorback-masterNugget>=0.5.0:security/razorback-masterNugget \
		wine:emulators/wine

USES=		autoreconf libtool pkgconfig

ONLY_FOR_ARCHS=	i386
ONLY_FOR_ARCHS_REASON=	only supported under i386 due to wine requirements

RB_LIBDIR?=	${PREFIX}/lib/razorback
GNU_CONFIGURE=	yes
USE_LDCONFIG=	${RB_LIBDIR}
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DEBUG ASSERT
ASSERT_DESC=	Enable Asserts

DEBUG_CONFIGURE_ENABLE=	debug
ASSERT_CONFIGURE_ENABLE=assert

.include <bsd.port.mk>

# Created by: Tom Judge <tom@tomjudge.com>

PORTNAME=	pdfFox
PORTVERSION=	0.5.0
PORTREVISION=	5
CATEGORIES=	security
MASTER_SITES=	SF/razorbacktm/Nuggets
PKGNAMEPREFIX=	razorback-
DIST_SUBDIR=	razorback

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Framework for an intelligence driven security - PDF Fox

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Abandonware, last release in 2012 and listed as alpha quality by upstream
EXPIRATION_DATE=2022-03-31

LIB_DEPENDS=	librazorback_api.so:security/razorback-api \
		libjson-c.so:devel/json-c
BUILD_DEPENDS=	razorback-masterNugget>=0.5.0:security/razorback-masterNugget
RUN_DEPENDS=	razorback-masterNugget>=0.5.0:security/razorback-masterNugget

RB_LIBDIR?=	${PREFIX}/lib/razorback
GNU_CONFIGURE=	yes
USES=		autoreconf libtool pkgconfig
USE_LDCONFIG=	${RB_LIBDIR}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	DEBUG ASSERT

ASSERT_DESC=	Enable Asserts
ASSERT_CONFIGURE_ENABLE=	assert
DEBUG_CONFIGURE_ENABLE=	debug

post-patch:
	@${REINPLACE_CMD} '/CWARNINGS/ s|-Werror||' ${WRKSRC}/configure

post-install:
	${LN} -sf ${RB_LIBDIR}/pdfFox.so.2 ${STAGEDIR}${RB_LIBDIR}/pdfFox.so.2.0.0

.include <bsd.port.mk>

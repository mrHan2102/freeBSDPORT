# Created by: Laurent Courty

PORTNAME=	gpsbabel
PORTVERSION=	1.4.4
PORTREVISION=	1
CATEGORIES=	astro geography
MASTER_SITES=	https://secure.ohos.nl/downloads/ \
		LOCAL/beech
PKGNAMESUFFIX=	14

MAINTAINER=	dev2@heesakkers.info
COMMENT=	GPS file translating tool (pre-qt version)

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		autoreconf
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-expathdr=${LOCALBASE}/include \
		--with-libexpat=${LOCALBASE}/lib

PLIST_FILES=	bin/gpsbabel

CONFLICTS=	gpsbabel

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gpsbabel

.include <bsd.port.mk>

# Created by: Max Khon <fjoe@FreeBSD.org>

PORTNAME=	libmspack
PORTVERSION=	0.10.1
PORTREVISION=	0
CATEGORIES=	archivers
MASTER_SITES=	http://www.cabextract.org.uk/libmspack/
DISTNAME=	${PORTNAME}-${PORTVERSION}alpha

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for Microsoft compression formats

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		cpe libtool pathfix
CPE_VENDOR=	libmspack_project
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} 's,-Wno-unused-result,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>

# Created by: Hye-Shik Chang <perky@python.or.kr>

PORTNAME=	libart_lgpl
PORTVERSION=	2.3.21
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	graphics
MASTER_SITES=	GNOME
DISTNAME=	${PORTNAME:S/2$//}-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library for high-performance 2D graphics

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

CONFLICTS=	libart

.include <bsd.port.mk>

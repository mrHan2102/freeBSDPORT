# Created by: Piotr Kubaj <pkubaj@anongoth.pl>

PORTNAME=	audiofile
PORTVERSION=	0.3.6
DISTVERSIONSUFFIX=	-9.el7
PORTREVISION=	2
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Implementation of the Audio File Library (Linux CentOS ${LINUX_DIST_VER})

USES=		cpe linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

CONFLICTS=	linux-c6-${PORTNAME}
DESCR=		${.CURDIR}/../lib${PORTNAME}/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

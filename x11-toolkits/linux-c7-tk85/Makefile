# Created by: Piotr Kubaj <pkubaj@anongoth.pl>

PORTNAME=	tk
PORTVERSION=	8.5.13
DISTVERSIONSUFFIX=	-6.el7
PORTREVISION=	1
CATEGORIES=	x11-toolkits linux
PKGNAMESUFFIX=	85

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Graphical toolkit for TCL (Linux CentOS ${LINUX_DIST_VER})

USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes
USE_LINUX_RPM_BAD_PERMS=	yes

CONFLICTS=	linux-c6-${PORTNAME}${PKGNAMESUFFIX}
DATADIR=	${PREFIX}/usr/share/tk${PORTVERSION:R}
DESCR=		${.CURDIR}/../${PORTNAME}${PKGNAMESUFFIX}/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

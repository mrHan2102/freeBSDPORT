# Created by: thierry@pompo.net

PORTNAME=	kosmorrolib
PORTVERSION=	1.0.1
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Library that computes the ephemerides

LICENSE=	CeCILL-C
LICENSE_NAME=	${LICENSE}
LICENSE_TEXT=	CeCILL-C Free Software License Agreement
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${PYNUMPY}	\
		${PYTHON_PKGNAMEPREFIX}skyfield>0:astro/py-skyfield@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}skyfield-data>0:astro/py-skyfield-data@${PY_FLAVOR}
RUN_DEPENDS=	${PYNUMPY}	\
		${PYTHON_PKGNAMEPREFIX}skyfield>0:astro/py-skyfield@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}skyfield-data>0:astro/py-skyfield-data@${PY_FLAVOR}

#USE_GITHUB=	yes
#GH_ACCOUNT=	Kosmorro
#GH_PROJECT=	lib

USES=		python:3.7+
USE_PYTHON=	distutils

NO_ARCH=	yes

.include <bsd.port.mk>

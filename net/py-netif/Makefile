# Created by: William Grzybowski <wg@FreeBSD.org>

PORTNAME=	netif
PORTVERSION=	1.0.20181212
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Python network configuration library for FreeBSD

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}bsd>0:devel/py-bsd@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	freenas
GH_PROJECT=	py-netif
GH_TAGNAME=	be23674

HAS_CONFIGURE=	yes
USES=		python:3.6+
USE_PYTHON=	autoplist distutils cython

.include <bsd.port.mk>

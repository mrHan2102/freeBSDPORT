# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	ttfautohint-py
PORTVERSION=	0.4.3
PORTREVISION=	1
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	.post1
CATEGORIES=	print python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python wrapper for ttfautohint

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>=0:devel/py-setuptools_scm@${PY_FLAVOR}
LIB_DEPENDS=	libttfautohint.so:print/ttfautohint

USES=		gmake python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

GH_ACCOUNT=	fonttools
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|%%PORTVERSION%%|${PORTVERSION}|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>

PORTNAME=	hidapi
DISTVERSION=	0.11.0.post2
CATEGORIES=	comms python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cython interface to comms/hidapi

LICENSE=	GPLv3

LIB_DEPENDS=	libhidapi.so:comms/hidapi

USES=		python:3.6+
USE_PYTHON=	autoplist cython distutils

MAKE_ENV+=	DISTUTILS_DEBUG=1

post-patch:
	@${REINPLACE_CMD} -e 's|usb-1.0|usb|g' ${WRKSRC}/setup.py

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/hid*.so

.include <bsd.port.mk>

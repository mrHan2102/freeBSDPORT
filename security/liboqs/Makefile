PORTNAME=	liboqs
DISTVERSION=	0.7.0
CATEGORIES=	security

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C library for quantum-resistant cryptography

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BROKEN_i386=	Unknown or unsupported processor: i386
BROKEN_powerpc=	Unknown or unsupported processor: powerpc

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		cmake python:test ssl
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	open-quantum-safe

CMAKE_ON=	BUILD_SHARED_LIBS OQS_DIST_BUILD

TEST_TARGET=	run_tests # many tests fail to build, see https://github.com/open-quantum-safe/liboqs/issues/1090

BINARY_ALIAS=	python3=${PYTHON_CMD}

.include <bsd.port.mk>

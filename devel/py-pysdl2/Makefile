PORTNAME=	pysdl2
PORTVERSION=	0.9.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PySDL2-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python bindings to the SDL2 libraries

LICENSE=	PD CC0-1.0 ZLIB
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/doc/copying.rst

USES=		dos2unix python:3.6+ sdl
USE_PYTHON=	autoplist concurrent distutils
USE_SDL=	gfx2 image2 mixer2 sdl2 ttf2

NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

DOCS_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=0,1:textproc/py-sphinx@${PY_FLAVOR}

post-build-DOCS-on:
	@cd ${WRKSRC}/doc && ${MAKE_CMD} html

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc/_build/html && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR} '! -name .buildinfo'

.include <bsd.port.mk>

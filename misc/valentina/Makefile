PORTNAME=	valentina
DISTVERSION=	0.7.49
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Sewing pattern drafting tool aiming to remake the garment industry

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE_GPL.txt

USES=		compiler:c++11-lang desktop-file-utils dos2unix gl gmake qmake qt:5
USE_QT=		buildtools_build concurrent core gui linguisttools_build network \
		opengl printsupport svg testlib_build widgets xml xmlpatterns
USE_GL=		gl
USE_LDCONFIG=	yes

USE_GITLAB=	yes
GL_ACCOUNT=	smart-pattern
GL_COMMIT=	5b7e98bf48a86e3c444423a9f03533440a39aad9

DOS2UNIX_FILES=	src/libs/vgeometry/vellipticalarc.cpp

QMAKE_ARGS=	CONFIG+="noTests" CONFIG+="noRunPath" PREFIX=${PREFIX}
.if !defined(WITH_CCACHE_BUILD) || defined(NO_CCACHE)
QMAKE_ARGS+=	CONFIG+="no_ccache"
.endif

BINARY_ALIAS=	hg=/usr/bin/true git=/usr/bin/false

.include <bsd.port.mk>

# Created by: Kevin Zheng <kevinz5000@gmail.com>

PORTNAME=	openclonk
DISTVERSION=	8.1
PORTREVISION=	3
DISTVERSIONSUFFIX=	-src
CATEGORIES=	games
MASTER_SITES=	http://www.openclonk.org/builds/release/${DISTVERSION}/

MAINTAINER=	kevinz5000@gmail.com
COMMENT=	Multiplayer action game involving small and nimble humanoids

LICENSE=	ISCL CC0-1.0
LICENSE_COMB=	multi
LICENSE_FILE_ISCL=	${WRKSRC}/COPYING

BROKEN_aarch64=		fails to compile: mmintrin.h:50:12: invalid conversion between vector type '__m64' (vector of 1 'long long' value) and integer type 'int' of different size
BROKEN_powerpc64=	fails to compile: C4Texture.cpp:260:13: error: 'stoul' is not a member of 'std'

LIB_DEPENDS=	libalut.so:audio/freealut \
		libfreetype.so:print/freetype2 \
		libminiupnpc.so:net/miniupnpc \
		libogg.so:audio/libogg \
		libpng.so:graphics/png \
		libtinyxml.so:textproc/tinyxml \
		libvorbis.so:audio/libvorbis

WRKSRC=		${WRKDIR}/openclonk-release-${PORTVERSION}-src

# make install has parallel issues with ninja
USES=		cmake:noninja desktop-file-utils gl gnome jpeg openal \
		pkgconfig sdl tar:bzip2 xorg
USE_GL=		gl glew glu
USE_SDL=	sdl2
USE_XORG=	x11 xpm
CMAKE_ARGS=	-DAudio_TK:STRING="OpenAL"
LDFLAGS_i386=	-Wl,-znotext

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc64le
CFLAGS+=	-DNO_WARN_X86_INTRINSICS
USES+=		compiler:gcc-c++11-lib
.else
USES+=		compiler:c++14-lang
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|DESTINATION games|DESTINATION bin|' \
		-e 's|share/games|share|' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>

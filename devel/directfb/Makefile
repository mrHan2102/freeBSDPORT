# Created by: Devaux Fabien <fab@gcu.info>

PORTNAME=	directfb
PORTVERSION=	1.4.17
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	http://sources.buildroot.net/
DISTNAME=	DirectFB-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphic development lightweight API

LICENSE=	LGPL21

LIB_DEPENDS=	libpng.so:graphics/png

OPTIONS_DEFINE=	FREETYPE X11 SDL UNIQUE TEST DOCS
UNIQUE_DESC=	Unique (WM Module)

OPTIONS_DEFAULT=	FREETYPE X11 SDL
OPTIONS_SUB=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		cpe gmake jpeg libtool ncurses pathfix perl5 pkgconfig
USE_LDCONFIG=	yes
USE_PERL5=	build
PORTDOCS=	*

DIRECTFB_SHLIB=	6.0.11	# LT_BINARY.LT_AGE.LT_REVISION
DIRECTFB_BIN=	${DIRECTFB_SHLIB:R:R}	# LT_BINARY
PLIST_SUB+=	DIRECTFB_VERSION="${PORTVERSION}" \
		DIRECTFB_RELEASE="${PORTVERSION:R}" \
		DIRECTFB_SHLIB="${DIRECTFB_SHLIB}" \
		DIRECTFB_BIN="${DIRECTFB_BIN}"

CONFIGURE_ARGS=	--disable-osx --disable-extra-warnings --disable-profiling \
		--disable-debug --enable-debug-support --disable-trace \
		--enable-text --enable-gettid --enable-network \
		--disable-multi --enable-voodoo --disable-pure-voodoo \
		--enable-devmem --disable-fbdev --disable-vnc --disable-sysfs \
		--enable-jpeg --enable-zlib --enable-png --enable-gif \
		--disable-linotype --disable-video4linux \
		--disable-video4linux2 --with-gfxdrivers=all \
		--with-inputdrivers=all --with-smooth-scaling \
		--with-dither-rgb16=advanced

DOCS_BUILD_DEPENDS=	man2html:textproc/man2html
FREETYPE_LIB_DEPENDS=	libfreetype.so:print/freetype2
FREETYPE_CONFIGURE_ENABLE=	freetype
X11_USES=	xorg
X11_USE=	XORG=x11,xext,xorgproto
X11_CONFIGURE_ENABLE=	x11
SDL_USES=	sdl
SDL_USE=	sdl=sdl
SDL_CONFIGURE_ENABLE=	sdl
UNIQUE_CONFIGURE_ENABLE=	unique
TEST_CONFIGURE_WITH=	tests

post-patch:
	@${REINPLACE_CMD} -e \
		'/need_libc_r=yes/d ; \
		s|/usr/local|${LOCALBASE}|g ; s|/usr/X11R6|${LOCALBASE}|g' \
		${WRKSRC}/configure
	@${GREP} -lr alloca\.h ${WRKSRC} | ${XARGS} \
		${REINPLACE_CMD} -e 's|<alloca\.h>|<stdlib.h>|g'

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/html
.for f in AUTHORS ChangeLog NEWS README TODO fb.modes docs/README.screenshots docs/*.html
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor
.for f in docs/html/*.html docs/html/*.png
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/html
.endfor

.include <bsd.port.mk>

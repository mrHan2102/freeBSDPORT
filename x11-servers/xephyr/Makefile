PORTNAME=	xephyr
PORTREVISION=	0

COMMENT=	X server from X.Org based on kdrive

LICENSE=	MIT

LIB_DEPENDS+=	libxcb-image.so:x11/xcb-util-image \
		libxcb-icccm.so:x11/xcb-util-wm \
		libxcb-keysyms.so:x11/xcb-util-keysyms \
		libxcb-render-util.so:x11/xcb-util-renderutil \
		libxcb-util.so:x11/xcb-util

MASTERDIR=	${.CURDIR}/../xorg-server
DESCR=		${.CURDIR}/pkg-descr

SLAVE_PORT=	yes
USE_XORG=	x11 xcb

CONFIGURE_ARGS+=--enable-xephyr --disable-dmx --disable-xnest --disable-xvfb \
		--enable-kdrive --disable-xwayland

PLIST_FILES=	bin/Xephyr man/man1/Xephyr.1.gz

do-install:
	cd ${WRKSRC}/hw/kdrive/ephyr; DESTDIR=${STAGEDIR} ${MAKE} install

.include "${MASTERDIR}/Makefile"

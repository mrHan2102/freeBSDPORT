# Created by: Jesse <jessefrgsmith@yahoo.ca>

PORTNAME=	imagination
PORTVERSION=	3.0
PORTREVISION=	11
CATEGORIES=	multimedia
MASTER_SITES=	SF

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	DVD slideshow maker

LIB_DEPENDS=	libsox.so:audio/sox \
		libavcodec.so:multimedia/ffmpeg

GNU_CONFIGURE=	yes
USES=		gmake gnome libtool localbase pkgconfig
USE_GNOME=	gtk20 intltool libxslt
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext
NLS_USES_OFF=	gettext-tools

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS =/s/doc//' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} '/^imagination_LDADD =/s/$$/ -lm/' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>

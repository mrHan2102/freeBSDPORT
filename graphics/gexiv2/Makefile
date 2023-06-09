# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>

PORTNAME=	gexiv2
PORTVERSION=	0.12.3
CATEGORIES=	graphics
MASTER_SITES=	GNOME

MAINTAINER=	cmt@FreeBSD.org
COMMENT=	GObject-based wrapper around Exiv2 library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	vala>=0:lang/vala
LIB_DEPENDS=	libexiv2.so:graphics/exiv2

USES=		compiler:c++11-lang gnome libtool:build meson pathfix \
		pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build
USE_LDCONFIG=	yes
BINARY_WRAPPERS=	gm4

OPTIONS_DEFINE=		DOCS
OPTIONS_SUB=		yes
DOCS_BUILD_DEPENDS=	gtkdoc-scan:textproc/gtk-doc
DOCS_CONFIGURE_ON=	-Dgtk_doc=true

.include <bsd.port.options.mk>

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/vala/vapi

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libgexiv2.so
	${RM} -r ${STAGEDIR}${PREFIX}/lib/python*

.include <bsd.port.mk>

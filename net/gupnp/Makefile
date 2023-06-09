# Created by: Martin Wilke <miwi@FreeBSD.org>

PORTNAME=	gupnp
PORTVERSION=	1.4.0
CATEGORIES=	net
MASTER_SITES=	GNOME

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Framework for UPnP devices

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	glib>=2.66:devel/glib20 \
		gobject-introspection>=1.36:devel/gobject-introspection \
		gssdp>=1.3.0:net/gssdp \
		libsoup>=2.48.0:devel/libsoup
LIB_DEPENDS=	libgssdp-1.2.so:net/gssdp \
		libsoup-2.4.so:devel/libsoup \
		libuuid.so:misc/e2fsprogs-libuuid

USES=		compiler:c11 cpe gnome meson pkgconfig python:run shebangfix tar:xz
USE_GNOME=	glib20 introspection:build libxml2

MESON_ARGS=	-Dexamples=false -Dgtk_doc=false -Dintrospection=true
USE_CSTD=	c11
USE_LDCONFIG=	yes

CPE_VENDOR=	gnome

SHEBANG_FILES=	tools/gupnp-binding-tool-1.2

OPTIONS_DEFINE=	VAPI
OPTIONS_SUB=	yes

VAPI_BUILD_DEPENDS=	vala>=0.20:lang/vala
VAPI_MESON_TRUE=	vapi

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == "clang"
CPPFLAGS+=	-Wno-return-type
.endif

.include <bsd.port.post.mk>

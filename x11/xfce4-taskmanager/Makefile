# Created by: DaJoob

PORTNAME=	xfce4-taskmanager
PORTVERSION=	1.4.2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Task manager for the Xfce desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext-tools gmake gnome localbase pkgconfig tar:bzip2 \
		xorg
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool libwnck3
USE_XORG=	ice sm x11 xmu xt

GNU_CONFIGURE=	yes

PORTSCOUT=	limitw:1,even

CONFIGURE_ARGS+=	--disable-silent-rules --disable-gksu --enable-wnck3

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>

# Created by: ijliao

PORTNAME=	pen
PORTVERSION=	0.34.1
CATEGORIES=	net
MASTER_SITES=	http://siag.nu/pub/pen/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Load balancer for UDP and TCP based protocols

LICENSE=	GPLv2

USES=		cpe ssl
CPE_VENDOR=	${PORTNAME}_project

GNU_CONFIGURE=	yes
USE_RC_SUBR=	pen
CONFIGURE_ARGS=	--with-daemon --with-docdir=${DOCSDIR} --without-geoip \
		--with-ssl=${OPENSSLBASE}
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

PORTDOCS=	penstats HOWTO AUTHORS README ChangeLog COPYING
PLIST_FILES=	bin/mergelogs bin/pen bin/penctl bin/penlog \
		bin/penlogd man/man1/mergelogs.1.gz \
		man/man1/pen.1.gz man/man1/penctl.1.gz \
		man/man1/penlog.1.gz man/man1/penlogd.1.gz

OPTIONS_DEFINE=	DEBUG DOCS KQUEUE
OPTIONS_DEFAULT=KQUEUE
KQUEUE_DESC=	Use kqueue backend

.if defined(WITH_FDSETSIZE)
CONFIGURE_ARGS+=	--with-fd_setsize=${WITH_FDSETSIZE}
.endif

KQUEUE_CONFIGURE_ON=	--with-kqueue
KQUEUE_CONFIGURE_OFF=	--with-poll
DEBUG_CONFIGURE_ENABLE=	debugging

post-patch:
	@${REINPLACE_CMD} 's/-pg//' ${WRKSRC}/configure

.include <bsd.port.mk>

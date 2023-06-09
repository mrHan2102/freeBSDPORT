# Created by: Boris Lytochkin (lytboris@gmail.com)

PORTNAME=	mongoose
PORTVERSION=	5.6
CATEGORIES=	www

MAINTAINER=	lytboris@gmail.com
COMMENT=	Small, fast, embeddable web server with CGI, SSL, Authorization

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	cesanta
GH_TAGNAME=	632b3a3

USES=		cpe gmake dos2unix
CPE_VENDOR=	cesanta

ALL_TARGET=	web_server
MAKE_ENV=	LIBS=-lpthread
BUILD_WRKSRC=	${WRKSRC}/examples/web_server

USE_RC_SUBR=	mongoose

NO_OPTIONS_SORT=	YES

FS_DESC=Filesystem options

OPTIONS_MONGOOSE=AUTH CGI DAV DIRECTORY_LISTING LOGGING SSI
OPTIONS_NS=SSL IPV6 DEBUG
OPTIONS_DEFINE=${OPTIONS_MONGOOSE} ${OPTIONS_NS} DEBUG_HEXDUMP THREADS
OPTIONS_DEFAULT=${OPTIONS_DEFINE:NDEBUG*}

CGI_DESC=		Enable CGI
AUTH_DESC=		Enable authentication
DAV_DESC=		Enable DAV (requires DIRECTORY_LISTING)
DIRECTORY_LISTING_DESC=	Enable directory listing
LOGGING_DESC=		Enable logging
SSI_DESC=		Enable SSI
THREADS_DESC=		Enable threads
DEBUG_HEXDUMP_DESC=	Enable hexdump of sent and received traffic

SSL_USES=		ssl

.include <bsd.port.options.mk>

CFLAGS_EXTRA=

.for FLAG in ${OPTIONS_MONGOOSE}
.	if !${PORT_OPTIONS:M${FLAG}}
CFLAGS_EXTRA+=-DMONGOOSE_NO_${FLAG}
.	endif
.endfor

.for FLAG in ${OPTIONS_NS}
.	if ${PORT_OPTIONS:M${FLAG}}
CFLAGS_EXTRA+=-DNS_ENABLE_${FLAG}
.	endif
.endfor

.if !${PORT_OPTIONS:MTHREADS}
CFLAGS_EXTRA+=-DNS_DISABLE_THREADS -DMONGOOSE_NO_THREADS
.endif

.if ${PORT_OPTIONS:MDEBUG_HEXDUMP}
CFLAGS_EXTRA+=-DNS_ENABLE_HEXDUMP
.endif

.if ${PORT_OPTIONS:MSSL}
CFLAGS_EXTRA+=	-I${OPENSSLINC} -L${OPENSSLLIB} -lssl
.endif

.if !empty(PORT_OPTIONS:MDAV) && empty(PORT_OPTIONS:MDIRECTORY_LISTING)
BROKEN=	DAV requires DIRECTORY_LISTING
.endif

MAKE_ENV+=	CFLAGS_EXTRA="-DMONGOOSE_NO_WEBSOCKET ${CFLAGS_EXTRA}"

PLIST_FILES=	bin/mongoose

do-install:
	${MV} ${BUILD_WRKSRC}/web_server ${BUILD_WRKSRC}/mongoose
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/mongoose ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

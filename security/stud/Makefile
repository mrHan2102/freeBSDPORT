# Created by: Franz Bettag <franz@bett.ag>

PORTNAME=	stud
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	franz@bett.ag
COMMENT=	Scalable TLS Unwrapping Daemon

LICENSE=	BSD2CLAUSE

DEPRECATED=	Abandonware, marked BROKEN on 12+ in 2019
EXPIRATION_DATE=2022-03-31

LIB_DEPENDS=	libev.so:devel/libev

USES=		gmake ssl
USE_GITHUB=	yes

GH_ACCOUNT=	wasted

MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/stud \
		share/man/man8/stud.8.gz

.include <bsd.port.pre.mk>

.if ${SSL_DEFAULT} == base
BROKEN_FreeBSD_12=	incomplete definition of type 'struct ssl_ctx_st'
BROKEN_FreeBSD_13=	incomplete definition of type 'struct ssl_ctx_st'
BROKEN_FreeBSD_14=	incomplete definition of type 'struct ssl_ctx_st'
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.post.mk>

# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>

PORTNAME?=	mvdsv
PORTVERSION=	0.34
PORTEPOCH=	2
CATEGORIES?=	games

MAINTAINER=	danfe@FreeBSD.org
COMMENT?=	Enhanced QuakeWorld server with multi-view demos capability

LICENSE=	GPLv2

.if ${PORTNAME} == mvdsv
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libpcre.so:devel/pcre
USES=		localbase:ldflags
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	deurk

MAKEFILE=	Makefile.BSD
MAKE_ARGS=	UNAME=${OPSYS}

PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=		OPTIMIZED_CFLAGS
OPTIONS_DEFINE_i386=	ASM
OPTIONS_DEFAULT_i386=	ASM
ASM_IMPLIES=	OPTIMIZED_CFLAGS

ASM_MAKE_ARGS_OFF=	-DWITHOUT_X86_ASM
OPTIMIZED_CFLAGS_MAKE_ARGS=	-DWITH_OPTIMIZED_CFLAGS

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

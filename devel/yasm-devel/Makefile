# Created by: ijliao

PORTNAME=		yasm
PORTVERSION=		1.2.0.29
DISTVERSIONSUFFIX=	.g87c0
PORTREVISION=		1
CATEGORIES=		devel lang
MASTER_SITES=		http://www.tortall.net/projects/yasm/snapshots/v${DISTVERSION}${DISTVERSIONSUFFIX}/
PKGNAMESUFFIX=		-devel

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Complete rewrite of the NASM assembler (Development Snapshot)

LICENSE=	ART10 BSD2CLAUSE BSD3CLAUSE
LICENSE_COMB=	multi

OPTIONS_DEFINE=	DEBUG NLS

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-python --disable-python-bindings
TEST_TARGET=		check

NLS_USES=		gettext iconv
NLS_CONFIGURE_ENABLE=	nls
NLS_CONFIGURE_ON=	--with-libiconv-prefix=${LOCALBASE} \
			--with-libintl-prefix=${LOCALBASE}
NLS_CONFIGURE_OFF=	--without-libiconv-prefix \
			--without-libintl-prefix

CONFLICTS_INSTALL=	yasm

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDEBUG} || defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug
.endif

.include <bsd.port.mk>

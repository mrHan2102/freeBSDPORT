PORTNAME=	lowdown
PORTVERSION=	0.10.0
CATEGORIES=	textproc
MASTER_SITES=	https://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

BUILD_DEPENDS=	${LOCALBASE}/lib/libdiff.a:textproc/libdiff
LDFLAGS+=	-lmd
MAKE_ARGS=	LDFLAGS="${LDFLAGS}" MANDIR=${PREFIX}/share/man

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	PREFIX="${PREFIX}"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-diff

.include <bsd.port.mk>

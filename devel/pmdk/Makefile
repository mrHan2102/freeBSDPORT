PORTNAME=	pmdk
DISTVERSION=	1.6.1
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Libraries and tools to manage and access persistent memory devices

# PMDK code is BSD3CLAUSE, jemalloc is BSD2CLAUSE,
# Valgrind headers are BSD4CLAUSE.
LICENSE=	BSD3CLAUSE BSD2CLAUSE BSD4CLAUSE
LICENSE_COMB=	multi

ONLY_FOR_ARCHS=	aarch64 amd64

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid

USES=		autoreconf:build gmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	pmem
USE_LDCONFIG=	yes

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/pmreorder
	${RM} ${STAGEDIR}${PREFIX}/man/man1/pmreorder.1.gz
	${RM} -r ${STAGEDIR}${PREFIX}/lib/pmdk_debug
	${RM} -r ${STAGEDIR}${PREFIX}/share/pmreorder
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pmempool
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so.1.0.0

.include <bsd.port.mk>

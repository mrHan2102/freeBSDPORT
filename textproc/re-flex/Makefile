PORTNAME=	re-flex
PORTVERSION=	3.0.12
DISTVERSIONPREFIX=	v
PORTREVISION=	0
CATEGORIES=	textproc

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Regex-centric, fast and flexible scanner generator for C++

LICENSE=	BSD3CLAUSE

USES=		autoreconf compiler:c++11-lib gmake

CONFLICTS_INSTALL=	reflex

USE_GITHUB=	yes
GH_ACCOUNT=	Genivia
GH_PROJECT=	RE-flex

GNU_CONFIGURE=	yes

TEST_TARGET=	test

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/reflex
	(cd ${WRKSRC}/include/reflex && \
	 ${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/include/reflex)
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/lex.vim ${STAGEDIR}${DATADIR}/lex.vim

.include <bsd.port.mk>

PORTNAME=	mochiweb
PORTVERSION=	2.9.0p2
CATEGORIES=	www devel
PKGNAMEPREFIX=	erlang-
PKGNAMESUFFIX=	-basho

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Erlang library for building lightweight HTTP servers (Basho fork)

LICENSE=	MIT

CONFLICTS=	mochiweb

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	basho
GH_TAGNAME=	4d38821	# required

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

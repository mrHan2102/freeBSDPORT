PORTNAME=	edown
PORTVERSION=	0.8.1
CATEGORIES=	textproc
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	EDoc extension for generating Github-flavored Markdown

BROKEN=		does not build with Erlang 24 (record context undefined)

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	uwiger

ERL_DOCS=	doc/*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

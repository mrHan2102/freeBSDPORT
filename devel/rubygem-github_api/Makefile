# Created by: Steve Wills <swills@FreeBSD.org>

PORTNAME=	github_api
PORTVERSION=	0.19.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Wrapper that supports all of the GitHub API v3 methods

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable>=2.4<3:www/rubygem-addressable \
		rubygem-descendants_tracker>=0.0.4<0.1:devel/rubygem-descendants_tracker \
		rubygem-faraday>=0.8<2:www/rubygem-faraday \
		rubygem-hashie>=3.5.2:devel/rubygem-hashie \
		rubygem-oauth2>=1.0<2:net/rubygem-oauth2

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>

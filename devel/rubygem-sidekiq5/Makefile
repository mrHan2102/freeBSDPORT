# Created by: Steve Wills <swills@FreeBSD.org>

PORTNAME=	sidekiq
PORTVERSION=	5.2.9
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple, efficient background processing for Ruby

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-connection_pool>=2.2.2<3:net/rubygem-connection_pool \
		rubygem-rack20>=2.0,3<3,3:www/rubygem-rack20 \
		rubygem-rack-protection>=1.5.0:www/rubygem-rack-protection \
		rubygem-redis>=3.3.5<5:databases/rubygem-redis

USES=		cpe gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/sidekiq bin/sidekiqctl

CPE_VENDOR=	contribsys

PORTSCOUT=	limit:^5\.

.include <bsd.port.mk>

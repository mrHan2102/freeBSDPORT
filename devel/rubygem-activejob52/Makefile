# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>

PORTNAME=	activejob
PORTVERSION=	5.2.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	52

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport52>=${PORTVERSION}:devel/rubygem-activesupport52 \
		rubygem-globalid-rails52>=0.3.6:databases/rubygem-globalid-rails52

USES=		cpe gem
USE_RUBY=	yes

NO_ARCH=	yes

CPE_VENDOR=	rubyonrails
CPE_PRODUCT=	active_job

PORTSCOUT=	limit:^5\.2\.

.include <bsd.port.mk>

# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	flipper-ui
PORTVERSION=	0.22.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rack middleware that provides a fully featured web interface

LICENSE=	MIT

RUN_DEPENDS=	rubygem-erubi>=1.0.0<2.0.0:www/rubygem-erubi \
		rubygem-flipper>=${PORTVERSION}<0.23:devel/rubygem-flipper \
		rubygem-rack>=1.4,3<3,3:www/rubygem-rack \
		rubygem-rack-protection>=1.5.3<2.2.0:www/rubygem-rack-protection

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>

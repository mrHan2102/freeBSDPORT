PORTNAME=	Plack-Middleware-ServerStatus-Lite
PORTVERSION=	0.34
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Plack middleware to show server status like Apache mod_status

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-JSON>=2.53:converters/p5-JSON \
	p5-Net-CIDR-Lite>0:net/p5-Net-CIDR-Lite \
	p5-Parallel-Scoreboard>=0.03:devel/p5-Parallel-Scoreboard \
	p5-Plack>0:www/p5-Plack \
	p5-Try-Tiny>=0.09:lang/p5-Try-Tiny
# Tests will fail if not root or 80/tcp is used.
TEST_DEPENDS=	\
	p5-Starlet>0:www/p5-Starlet \
	p5-Test-TCP>0:devel/p5-Test-TCP

USES=	perl5
USE_PERL5=	modbuild
NO_ARCH=	YES

.include <bsd.port.mk>

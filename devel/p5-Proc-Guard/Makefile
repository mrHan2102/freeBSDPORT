PORTNAME=	Proc-Guard
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for process runner with RAII pattern

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Class-Accessor-Lite>=0.05:devel/p5-Class-Accessor-Lite
TEST_DEPENDS=	p5-Test-Requires>=0:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	YES

.include <bsd.port.mk>

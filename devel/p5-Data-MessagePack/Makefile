PORTNAME=	Data-MessagePack
PORTVERSION=	0.48
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GFUJI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for MessagePack

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Requires>=0:devel/p5-Test-Requires \
		p5-Test-LeakTrace>0:devel/p5-Test-LeakTrace

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	--xs

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>

PORTNAME=	Devel-StackTrace-WithLexicals
PORTVERSION=	2.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Devel::StackTrace + PadWalker

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Devel-StackTrace>=2.00:devel/p5-Devel-StackTrace \
	p5-PadWalker>=1.98:devel/p5-PadWalker

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>

PORTNAME=	Data-Localize
PORTVERSION=	0.00028
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for alternate data localization API

LICENSE=	MIT

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Moo>=1.000008:devel/p5-Moo \
	p5-MooX-Types-MooseLike>0:devel/p5-MooX-Types-MooseLike \
	p5-Log-Minimal>=0.14:devel/p5-Log-Minimal

USES=	perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	YES

.include <bsd.port.mk>

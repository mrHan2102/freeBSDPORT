PORTNAME=	Plack-Server-ReverseHTTP
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension of reversehttp gateway for PSGI application

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-AnyEvent>0:devel/p5-AnyEvent \
	p5-AnyEvent-ReverseHTTP>0:www/p5-AnyEvent-ReverseHTTP \
	p5-Plack>0:www/p5-Plack

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

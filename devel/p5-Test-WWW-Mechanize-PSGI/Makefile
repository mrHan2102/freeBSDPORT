PORTNAME=	Test-WWW-Mechanize-PSGI
PORTVERSION=	0.39
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to test PSGI programs using WWW::Mechanize

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Plack>0:www/p5-Plack \
	p5-Test-WWW-Mechanize>0:devel/p5-Test-WWW-Mechanize \
	p5-Try-Tiny>0:lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

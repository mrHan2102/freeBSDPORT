PORTNAME=	Plack-Middleware-File-Sass
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Sass support for all Plack frameworks

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Plack>0:www/p5-Plack \
	p5-Text-Sass>0:textproc/p5-Text-Sass
# Now, sass gem can be used instead of p5-Text-Sass.

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

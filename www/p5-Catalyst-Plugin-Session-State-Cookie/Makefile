# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>

PORTNAME=	Catalyst-Plugin-Session-State-Cookie
PORTVERSION=	0.17
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Stores a Catalyst Session in a Cookie

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Catalyst-Runtime>=5.80005:www/p5-Catalyst-Runtime \
	p5-Catalyst-Plugin-Session>=0.27:www/p5-Catalyst-Plugin-Session \
	p5-MRO-Compat>=0:devel/p5-MRO-Compat \
	p5-Moose>0:devel/p5-Moose \
	p5-namespace-autoclean>0:devel/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	configure extract
NO_ARCH=	yes

post-extract:
	@${PERL} -i.bak -ne 'print unless m,Test::,' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

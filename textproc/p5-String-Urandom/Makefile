PORTNAME=	String-Urandom
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to convert /dev/urandom to 8-bit chars

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Params-Validate>0:devel/p5-Params-Validate

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

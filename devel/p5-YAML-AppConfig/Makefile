PORTNAME=	YAML-AppConfig
PORTVERSION=	0.19
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to manage configuration files with YAML

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-YAML>=0.38:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

post-patch:
	${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>

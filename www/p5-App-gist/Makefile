# Created by: Denny Lin <dennylin93@hs.ntnu.edu.tw>

PORTNAME=	App-gist
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ALEXBIO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	GitHub Gist creator

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-App-Cmd>=0:devel/p5-App-Cmd \
		p5-Class-Load>=0:devel/p5-Class-Load \
		p5-Moo>=0:devel/p5-Moo \
		p5-Pithub>=0:devel/p5-Pithub \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey

CONFLICTS=	gist

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

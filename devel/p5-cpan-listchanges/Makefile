PORTNAME=	cpan-listchanges
PORTVERSION=	0.06
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to list changes for CPAN modules

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Algorithm-Diff>0:devel/p5-Algorithm-Diff \
	p5-CPAN-DistnameInfo>0:devel/p5-CPAN-DistnameInfo \
	p5-libwww>0:www/p5-libwww \
	p5-Try-Tiny>0:lang/p5-Try-Tiny \
	p5-YAML>0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>

PORTNAME=	App-TLSMe
PORTVERSION=	0.110000
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0000$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for TLS/SSL tunnel

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-AnyEvent>=5.34:devel/p5-AnyEvent \
	p5-Net-SSLeay>0:security/p5-Net-SSLeay \
	p5-Proc-Pidfile>0:devel/p5-Proc-Pidfile
TEST_DEPENDS=	p5-Test-TCP>0:devel/p5-Test-TCP

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

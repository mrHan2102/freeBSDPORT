# Created by: Rong-En Fan <rafan@infor.org>

PORTNAME=	Encode
PORTVERSION=	3.16
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DANKOGAI
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Provides interfaces between strings and the rest of the system

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${FIND} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Encode/ -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>

PORTNAME=	hiera-eyaml
PORTVERSION=	3.2.2
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	Backend for Hiera that provides encryption/decryption for properties

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-highline1>=0:devel/rubygem-highline1 \
		rubygem-optimist>=0:devel/rubygem-optimist

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/eyaml

.include <bsd.port.mk>

# Created by: Martin Wilke <miwi@FreeBSD.org>

PORTNAME=	Crypt_GPG
PORTVERSION=	1.6.6
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	GNU Privacy Guard (GPG)

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PEAR_PKGNAMEPREFIX}Console_CommandLine>=1.1.10:devel/pear-Console_CommandLine@${PHP_FLAVOR}

USES=		pear
USE_PHP=	mbstring posix

NO_ARCH=	yes

.include <bsd.port.mk>

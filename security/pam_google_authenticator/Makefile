# Created by: Jui-Nan Lin <jnlin@freebsd.cs.nctu.edu.tw>

PORTNAME=	pam_google_authenticator
PORTVERSION=	1.09
PORTEPOCH=	1
CATEGORIES=	security

MAINTAINER=	driesm@FreeBSD.org
COMMENT=	PAM module for two-step authentication from Google

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf gmake libtool
GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	google
GH_PROJECT=	google-authenticator-libpam

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		QRENCODE
OPTIONS_DEFAULT=	QRENCODE

QRENCODE_DESC=		Allow creation of QR-codes
QRENCODE_LIB_DEPENDS=	libqrencode.so:graphics/libqrencode

post-patch:
	@${REINPLACE_CMD} -e 's;/security;;' ${WRKSRC}/Makefile.am

.include <bsd.port.mk>

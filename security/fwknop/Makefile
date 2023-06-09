# Created by: Sean Greven <sean.greven@gmail.com>

PORTNAME=	fwknop
PORTVERSION=	2.6.10
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	http://www.cipherdyne.org/fwknop/download/

MAINTAINER=	sean.greven@gmail.com
COMMENT=	SPA implementation for Linux and FreeBSD

LICENSE=	GPLv2

BUILD_DEPENDS=	wget:ftp/wget
RUN_DEPENDS=	wget:ftp/wget
LIB_DEPENDS+=	libassuan.so:security/libassuan

USES=		cpe libtool
USE_LDCONFIG=	yes
USE_RC_SUBR=	fwknopd

CPE_VENDOR=	cipherdyne
CONFLICTS_BUILD=	fwknop-2.6.8_*

GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
INFO=		libfko

OPTIONS_DEFINE=	GPGME

OPTIONS_SINGLE=	FW
OPTIONS_SINGLE_FW=	IPFW PF

OPTIONS_DEFAULT=	GPGME IPFW

FW_DESC=	Firewall Backend
IPFW_DESC=	Use the IPFW firewall
PF_DESC=	Use the PF firewall.
GPGME_DESC=	Build support for gpgme

IPFW_CONFIGURE_WITH=	ipfw=/sbin/ipfw

PF_CONFIGURE_WITH=	pf=/sbin/pfctl

GPGME_LIB_DEPENDS=	libgpgme.so:security/gpgme
GPGME_LIB_DEPENDS+=	libgpg-error.so:security/libgpg-error
GPGME_CONFIGURE_WITH=	gpgme

post-install:
	(cd ${STAGEDIR}${PREFIX}/etc/fwknop && ${MV} access.conf access.conf.sample)
	(cd ${STAGEDIR}${PREFIX}/etc/fwknop && ${MV} fwknopd.conf fwknopd.conf.sample)

.include <bsd.port.mk>

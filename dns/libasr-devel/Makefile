# Created by: Ashish SHUKLA <ashish@FreeBSD.org>

PORTNAME=	libasr
PORTVERSION=	201602131606
PORTREVISION=	3
CATEGORIES=	dns
MASTER_SITES=	http://www.opensmtpd.org/archives/
PKGNAMESUFFIX=	-devel

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library (development snapshot)

LICENSE=	ISCL BSD4CLAUSE BSD3CLAUSE BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		cpe groff libtool

CONFLICTS=	libasr

OPTIONS_DEFINE=	CA_BUNDLE
OPTIONS_DEFAULT=	CA_BUNDLE

CA_BUNDLE_DESC=	Use NSS CA bundle for SSL instead of /etc/ssl/cert.pem

CPE_VENDOR=	openbsd

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-mantype="man"
INSTALL_TARGET=	install-strip

CA_BUNDLE_CONFIGURE_WITH=	ca-file=${LOCALBASE}/share/certs/ca-root-nss.crt
CA_BUNDLE_RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

post-patch:
	${REINPLACE_CMD} -e '/opensslv.h/d' ${WRKSRC}/openbsd-compat/includes.h

.include <bsd.port.mk>

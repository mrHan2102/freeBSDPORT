# Created by: Motoyuki Kasahara <m-kasahr@sra.co.jp>

PORTNAME=	libtool
PORTREVISION=	1

COMMENT=	Generic shared library support script

.include "${.CURDIR}/../libtool/Makefile.common"

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	gm4:devel/m4
RUN_DEPENDS=	gm4:devel/m4

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-ltdl-install
MAKE_ARGS=	MAKEINFOFLAGS=--no-split
NO_ARCH=	yes
USES+=		makeinfo

INFO=		libtool

post-patch:
	@${RM} ${WRKSRC}/doc/*.info*
	@${TOUCH} ${WRKSRC}/doc/libtool.1

.include <bsd.port.mk>

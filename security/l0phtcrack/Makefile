# Created by: trevor

PORTNAME=	l0phtcrack
PORTVERSION=	1.5
CATEGORIES=	security
MASTER_SITES=	http://www.mavetju.org/download/adopted/ \
		http://mirror.amdmi3.ru/distfiles/${DIST_SUBDIR}/
#		http://www.cotse.com/sw/WinNT/
DISTNAME=	lcsrc
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cracks SAMBA or Windows NT passwords

DEPRECATED=	Obsolete, Microsoft LANMAN and NT password hashes are deprecated
EXPIRATION_DATE=2022-03-31

# Converted from RESTRICTED
LICENSE=	l0phtcrack
LICENSE_NAME=	l0phtcrack
LICENSE_TEXT=	uses GNU getopt with BSDish-licensed code from OpenSSL
LICENSE_PERMS=	auto-accept

USES=		dos2unix perl5 zip
USE_PERL5=	build
NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/lc_CLI
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-extract:
	@${RM} ${WRKSRC}/*exe
	@${REINPLACE_CMD} -e 's|ommited|omitted|' ${WRKSRC}/util.c

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -DMPU8086 *.c -o lc_CLI

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lc_CLI ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

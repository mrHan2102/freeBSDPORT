# Created by: Emanuel Haupt <ehaupt@critical.ch>

PORTNAME=	tmpreaper
PORTVERSION=	1.6.14
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/ehaupt
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cleans up files in directories based on their age

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe
CPE_VENDOR=	debian
GNU_CONFIGURE=	yes

PLIST_FILES=	sbin/tmpreaper man/man8/tmpreaper.8.gz
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PORTSCOUT=	ignore:1

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

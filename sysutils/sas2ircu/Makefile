PORTNAME=	sas2ircu
PORTVERSION=	20.00.00.00
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://docs.broadcom.com/docs-and-downloads/host-bus-adapters/host-bus-adapters-common-files/sas_sata_6g_p20_point6/
DISTNAME=	SAS2IRCU_P20

MAINTAINER=	freebsd-ports@dan.me.uk
COMMENT=	Tool for basic management of mps(4) based LSI/Avago/Broadcom RAID controllers

LICENSE=	sas2ircu
LICENSE_NAME=	BROADCOM
LICENSE_TEXT=	Source recipient must acknowledge license.\
		Reproduction or redistribution prohibited.\
		See https://www.broadcom.com/cs/Satellite?pagename=AVG2/Utilities/EulaMsg
LICENSE_PERMS=	no-dist-mirror no-dist-sell no-pkg-mirror no-pkg-sell auto-accept

USES=		zip
NO_BUILD=	yes

ONLY_FOR_ARCHS=	i386 amd64
ONLY_FOR_ARCHS_REASON=	binaries only available for i386 and amd64 from Broadcom

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sas2ircu_freebsd_${ARCH}_rel/sas2ircu\
		${STAGEDIR}${PREFIX}/sbin

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Readme_Release_Notes_SAS2IRCU_Phase_${PORTVERSION}.txt\
		${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/SAS2IRCU_Phase20.0-${PORTVERSION}.pdf\
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

# Created by: Nicola Vitale <nivit@FreeBSD.org>

PORTNAME=	csso
PORTVERSION=	1.3.9
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://nivit.altervista.org/FreeBSD/ports/distfiles/

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	CSS optimizer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE.txt

USES=		nodejs:run

GH_ACCOUNT=	css

NO_BUILD=	yes
NO_ARCH=	yes

USE_GITHUB=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/bin
	${INSTALL_DATA} ${WRKSRC}/USAGE ${STAGEDIR}${DATADIR}/USAGE
	${INSTALL_SCRIPT} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${DATADIR}/bin/${PORTNAME}
	${LN} -sf ${DATADIR}/bin/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin/${PORTNAME}
	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/lib

.include <bsd.port.mk>

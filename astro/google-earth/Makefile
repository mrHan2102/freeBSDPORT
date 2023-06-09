PORTNAME=	google-earth
PORTVERSION=	7.1.7.2606
PORTREVISION=	1
PORTEPOCH=	3
CATEGORIES=	astro deskutils geography
MASTER_SITES=	https://dl.google.com/dl/earth/client/current/
DISTFILES_amd64=google-earth-stable_current_x86_64.rpm
DISTFILES_i386=	google-earth-stable_current_i386.rpm
DIST_SUBDIR=	${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Virtual globe, map and geographical information program

# Converted from RESTRICTED
LICENSE=	GEARTH
LICENSE_NAME=	Google Earth
LICENSE_TEXT=	Not really sure about the redistribution terms
LICENSE_PERMS=	auto-accept

DEPRECATED=	Needs newer version to connect to server
EXPIRATION_DATE=2022-01-01

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
PLIST_SUB=	LINUXBASE=${LINUXBASE}
USES=		desktop-file-utils linux
USE_LINUX=	dri xorglibs

post-patch:
	@${SED} -i '' 's/^Exec=[^[:space:]]*/Exec=googleearth/' \
		${WRKSRC}/opt/google/earth/free/google-earth.desktop

do-install:
.for s in 16 22 24 32 48 64 128 256
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}x${s}/apps
	${INSTALL_DATA} ${WRKSRC}/opt/google/earth/free/product_logo_${s}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}x${s}/apps/google-earth.png
.endfor
	${INSTALL_DATA} ${WRKSRC}/opt/google/earth/free/google-earth.desktop \
		${STAGEDIR}${DESKTOPDIR}
	${MKDIR} ${STAGEDIR}${LINUXBASE}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} opt ${STAGEDIR}${LINUXBASE})
	${CHMOD} +x ${STAGEDIR}${LINUXBASE}/opt/google/earth/free/googleearth-bin
	${INSTALL_SCRIPT} ${FILESDIR}/googleearth ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

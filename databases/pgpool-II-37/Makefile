PORTNAME=	pgpool-II
PORTVERSION=	3.7.14
CATEGORIES=	databases
MASTER_SITES=	http://www.pgpool.net/mediawiki/images/
PKGNAMESUFFIX=	37

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Connection pool server for PostgreSQL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limit:^3.7.[0-9]*

USES=		gmake libtool pgsql:9.6+
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

USE_RC_SUBR=	pgpool
CONFLICTS=	pgpool-II

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS SSL
OPTIONS_DEFAULT=	SSL

SSL_CONFIGURE_WITH=	openssl
SSL_USES=		ssl

post-install:
	@${MKDIR} ${STAGEDIR}/var/run/pgpool
	${INSTALL_LIB} ${WRKSRC}/src/libs/pcp/.libs/libpcp.so.1.0.0 ${STAGEDIR}${PREFIX}/lib

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} doc ${STAGEDIR}${DOCSDIR} "-not -name Makefile.\*"
.for f in AUTHORS ChangeLog NEWS TODO
	${INSTALL_DATA} ${WRKSRC}/$f ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

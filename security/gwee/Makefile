# Created by: chinsan <chinsan@mail2000.com.tw>

PORTNAME=	gwee
PORTVERSION=	1.36
CATEGORIES=	security www
MASTER_SITES=	PACKETSTORM/UNIX/utilities

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to exploit command execution vulnerabilities in web scripts

DEPRECATED=	Abandonware, last release 15+ years ago and dead upstream
EXPIRATION_DATE=2022-03-31

USES=		perl5 python ssl

LDFLAGS+=	-L${OPENSSLLIB} -lssl -lcrypto
CFLAGS+=	-I${OPENSSLINC} -DWITH_SSL

PLIST_FILES=	bin/gwee man/man1/gwee.1.gz

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.c \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>

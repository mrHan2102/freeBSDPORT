# Created by: Rick & Samu

PORTNAME=	sniff
PORTVERSION=	1.0
CATEGORIES=	security
MASTER_SITES=	LOCAL/fenner

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to sniff logins and passwords

LICENSE=	GPLv2

DEPRECATED=	Abandonware, last release around 2000 and dead upstream. Please consider using net/wireshark
EXPIRATION_DATE=2022-03-31

GNU_CONFIGURE=	yes

PLIST_FILES=	sbin/sniff man/man1/sniff.1.gz

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CC.*|CC=@CC@| ; \
		 s|^CFLAGS.*|CFLAGS=@CFLAGS@| ; \
		 s|^PREFIX.*|PREFIX=@PREFIX@|' ${WRKSRC}/Makefile.in

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} sniff \
		${STAGEDIR}${PREFIX}/sbin)
	(cd ${WRKSRC} && ${INSTALL_MAN} sniff.1 \
		${STAGEDIR}${MANPREFIX}/man/man1)

.include <bsd.port.mk>

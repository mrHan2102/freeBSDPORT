# $FreeBSD$

PORTNAME=	wrapalixresetbutton
PORTVERSION=	0.0.8
CATEGORIES=	sysutils
MASTER_SITES=	# empty
DISTFILES=	# none
EXTRACT_ONLY=	# empty

MAINTAINER=	coreteam@pfsense.org
COMMENT=	Utility to detect platform reset button state for use in scripting

PLIST_FILES=	sbin/wrapresetbtn \
		sbin/alixresetbtn \
		sbin/FW7541resetbtn \
		sbin/APUresetbtn \
		sbin/RCC-VEresetbtn \
		sbin/RCC-DFFresetbtn

ONLY_FOR_ARCHS=	i386 amd64

do-extract:
	${MKDIR} ${WRKSRC}

do-build:
	${CC} -Wall ${CFLAGS} -o ${WRKSRC}/wrapresetbtn ${FILESDIR}/wrapresetbtn.c
	${CC} -Wall ${CFLAGS} -o ${WRKSRC}/alixresetbtn ${FILESDIR}/alixresetbtn.c
	${CC} -Wall ${CFLAGS} -o ${WRKSRC}/FW7541resetbtn ${FILESDIR}/FW7541resetbtn.c
	${CC} -Wall ${CFLAGS} -o ${WRKSRC}/APUresetbtn ${FILESDIR}/APUresetbtn.c
	${CC} -Wall ${CFLAGS} -o ${WRKSRC}/RCC-VEresetbtn ${FILESDIR}/RCC-VE.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wrapresetbtn ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/alixresetbtn ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/FW7541resetbtn ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/APUresetbtn ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/RCC-VEresetbtn ${STAGEDIR}${PREFIX}/sbin
	${LN} -sf RCC-VEresetbtn ${STAGEDIR}${PREFIX}/sbin/RCC-DFFresetbtn

.include <bsd.port.mk>

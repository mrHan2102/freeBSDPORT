# Created by: Daniel Gerzo <danger@rulez.sk>

PORTNAME=	bruteforceblocker
PORTVERSION=	1.2.6
PORTREVISION=	2
CATEGORIES=	security

MAINTAINER=	danger@FreeBSD.org
COMMENT=	Checks for SSH bruteforce and blocks given IPs

LICENSE=	NONE

DEPRECATED=	Abandonware, please consider using security/sshguard
EXPIRATION_DATE=2022-03-31

RUN_DEPENDS=	p5-Unix-Syslog>=0:sysutils/p5-Unix-Syslog \
		p5-Sys-Hostname-Long>=0:sysutils/p5-Sys-Hostname-Long \
		p5-libwww>=0:www/p5-libwww \
		p5-Net-DNS>=0:dns/p5-Net-DNS

USES=		perl5 shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	dgerzo
USE_PERL5=	run

NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

SUB_FILES=	pkg-message
SHEBANG_FILES=	${PORTNAME}.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${STAGEDIR}${PREFIX}/sbin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.conf ${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf.sample
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for FILE in INSTALL CHANGELOG CREDITS
	${INSTALL_DATA} ${WRKSRC}/${FILE} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

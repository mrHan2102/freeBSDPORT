# Created by: Herve Quiroz <herve.quiroz@esil.univ-mrs.fr>

PORTNAME=	commons-primitives
PORTVERSION=	1.0
CATEGORIES=	java
MASTER_SITES=	https://archive.apache.org/dist/commons/primitives/source/
PKGNAMEPREFIX=	apache-
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library supporting Java primitive types

LICENSE=	APACHE20

DEPRECATED=	Abandoned upstream, last release in 2003
EXPIRATION_DATE=2022-03-31

USE_JAVA=	yes
USE_ANT=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
ALL_TARGET=	jar

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
ALL_TARGET+=	javadoc
.endif

do-install:
	${INSTALL_DATA} ${WRKSRC}/target/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/target/docs && ${COPYTREE_SHARE} api ${STAGEDIR}${DOCSDIR})
	${INSTALL_DATA} ${WRKSRC}/LICENSE.txt ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>

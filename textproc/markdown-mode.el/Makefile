PORTNAME=	markdown-mode.el
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4
CATEGORIES=	textproc elisp
PORTREVISION=	2
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Emacs major mode for editing Markdown-formatted text

LICENSE=	GPLv3+

USES=		emacs gmake

USE_GITHUB=	yes
GH_ACCOUNT=	jrblevin
GH_PROJECT=	markdown-mode

NO_ARCH=	yes

PLIST_FILES=	${EMACS_VERSION_SITE_LISPDIR}/markdown-mode.el \
		${EMACS_VERSION_SITE_LISPDIR}/markdown-mode.elc
PORTDOCS=	CHANGES.md CONTRIBUTING.md README.md

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/*.el ${WRKSRC}/*.elc \
		${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

PORTNAME=	rbenv
PORTVERSION=	1.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Manage multiple versions of ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	bash:shells/bash

USES=		cpe

USE_GITHUB=	yes

NO_BUILD=	yes

REINPLACE_ARGS=	-i ''

CPE_VENDOR=	rbenv_project

post-patch:
	@${REINPLACE_CMD} -e "s|\$${root}/completions|${DATADIR}/completions|g" \
		${WRKSRC}/libexec/rbenv-init

do-install:
	CC="${CC}" ${WRKSRC}/src/${CONFIGURE_CMD}
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} -C ${WRKSRC}/src
	( ${INSTALL_SCRIPT} ${WRKSRC}/libexec/* ${STAGEDIR}${PREFIX}/libexec/ )
	@${LN} -sf ../libexec/rbenv ${STAGEDIR}${PREFIX}/bin/rbenv
	@${MKDIR} ${STAGEDIR}${DATADIR}/completions
	( cd ${WRKSRC}/completions && ${COPYTREE_BIN} . ${STAGEDIR}${DATADIR}/completions )
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/rbenv.d
	( cd ${WRKSRC}/rbenv.d && ${COPYTREE_BIN} . ${STAGEDIR}${PREFIX}/etc/rbenv.d )

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/libexec/rbenv-realpath.dylib

.include <bsd.port.mk>

PORTNAME=	fmt
# Make sure to check devel/spdlog consumers too
PORTVERSION=	8.0.1
CATEGORIES=	devel
MASTER_SITES=	https://github.com/fmtlib/fmt/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Formatting library for C++

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

USES=		cmake compiler:c++11-lang cpe zip

CMAKE_OFF=	FMT_DOC FMT_TEST
CMAKE_ON=	BUILD_SHARED_LIBS
USE_LDCONFIG=	yes

PLIST_SUB=	PORTVERSION=${PORTVERSION}

# include/fmt/*
CONFLICTS_INSTALL=	axom

OPTIONS_DEFINE=	FULL_CACHE_DRAGONBOX
OPTIONS_DEFAULT=FULL_CACHE_DRAGONBOX
FULL_CACHE_DRAGONBOX_DESC=	Use larger binary size for better performance

FULL_CACHE_DRAGONBOX_CXXFLAGS=	-DFMT_USE_FULL_CACHE_DRAGONBOX=1

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DFMT_TEST:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>

PORTNAME=	mvfst
DISTVERSION=	g20211107
CATEGORIES=	net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Implementation of the QUIC transport protocol

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libfizz.so:security/fizz \
		libfmt.so:devel/libfmt \
		libfolly.so:devel/folly \
		libglog.so:devel/glog

USES=		cmake compiler:c++17-lang cpe
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	facebookincubator
GH_TAGNAME=	248b2dc39bbd36863bbaa50385e8683428610009

CPE_VENDOR=	facebook

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	BUILD_TESTS

CXXFLAGS+=	-fPIC

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>

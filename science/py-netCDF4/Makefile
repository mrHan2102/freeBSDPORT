# Created by: Wen Heping <wenheping@gmail.com>

PORTNAME=	netCDF4
PORTVERSION=	1.5.7
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	rel
CATEGORIES=	science python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Python Interface to the NetCDF Library (versions 3 and 4)

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libhdf5.so:science/hdf5 \
		libnetcdf.so:science/netcdf
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}cftime>=0:devel/py-cftime@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils cython cython_run

OPTIONS_DEFINE=	DOCS EXAMPLES

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}
PORTDOCS=	*
PORTEXAMPLES=	*

GH_ACCOUNT=	Unidata
GH_PROJECT=	netcdf4-python
USE_GITHUB=	yes

post-patch:
	@${ECHO_CMD} -n > ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "[options]" >> ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "use_ncconfig=True" >> ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "ncconfig=${LOCALBASE}/bin/nc-config" >> ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "[directories]" >> ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "HDF5_libdir=${LOCALBASE}/lib" >> ${WRKSRC}/setup.cfg
	@${ECHO_CMD} "HDF5_incdir=${LOCALBASE}/include" >> ${WRKSRC}/setup.cfg

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/netCDF4/_netCDF4*.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${INSTALL_DATA} * ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>

# Created by: Johannes Dieterich <jmd@FreeBSD.org>

PORTNAME=	drm-kmod
PORTVERSION=	g20190710
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Metaport of DRM modules for the linuxkpi-based KMS components

USES=		metaport

.include <bsd.port.options.mk>

.if ${OPSYS} != FreeBSD
IGNORE=		not supported on anything but FreeBSD (missing linuxkpi functionality)
.else
.if ${ARCH} == "amd64"
.if ${OSVERSION} < 1300000
RUN_DEPENDS=	${KMODDIR}/drm.ko:graphics/drm-fbsd12.0-kmod
.elif ${OSVERSION} >= 1300000 && ${OSVERSION} < 1300136
IGNORE=		not supported on older 13, no kernel support
.elif ${OSVERSION} >= 1300136 && ${OSVERSION} < 1400000
RUN_DEPENDS=	${KMODDIR}/drm.ko:graphics/drm-fbsd13-kmod
.elif ${OSVERSION} >= 1400000
RUN_DEPENDS=	${KMODDIR}/drm.ko:graphics/drm-current-kmod
.else
IGNORE=		not supported for this configuration
.endif
.endif
.endif

.include <bsd.port.mk>

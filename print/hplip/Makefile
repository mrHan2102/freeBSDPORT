# Created by: amistry@am-productions.biz

PORTNAME=	hplip
PORTVERSION=	3.20.6
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	Drivers and utilities for HP printers and All-in-One devices

LICENSE=	GPLv2+ MIT BSD3CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcupsimage.so:print/cups \
		libdbus-1.so:devel/dbus
RUN_DEPENDS=	cups-filters>=0:print/cups-filters \
		${PYTHON_PKGNAMEPREFIX}dbus>=0:devel/py-dbus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gobject3>=0:devel/py-gobject3@${PY_FLAVOR}

CONFLICTS_INSTALL=	hpijs

INSTALL_TARGET=	install-strip
USES=		dos2unix jpeg libtool pkgconfig python:3.6+ shebangfix
USE_LDCONFIG=	yes
SHEBANG_GLOB=	*.py hpps pstotiff
DOS2UNIX_FILES=	scan/sane/orblite.c

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-cupsbackenddir=${PREFIX}/libexec/cups/backend \
		--with-cupsfilterdir=${PREFIX}/libexec/cups/filter \
		--with-icondir=${DESKTOPDIR} \
		--with-systraydir=${PREFIX}/etc/xdg/autostart \
		--with-mimedir=${PREFIX}/share/cups/mime \
		--with-docdir=${DOCSDIR} \
		--with-htmldir=${DOCSDIR} \
		--with-drvdir=${PREFIX}/share/cups/drv \
		--disable-qt4
CONFIGURE_ENV+=	PYTHONINCLUDEDIR=${PYTHON_INCLUDEDIR}
CPPFLAGS+=	-I${LOCALBASE}/include -I${PYTHON_INCLUDEDIR}
LIBS+=		-L${LOCALBASE}/lib

OPTIONS_DEFINE=		DOCS FAX SCAN SNMP X11 XSANE
OPTIONS_DEFAULT=	SCAN SNMP X11
OPTIONS_SUB=		yes

DOCS_CONFIGURE_ENABLE=	doc-build

FAX_DESC=		PC Send Fax support
FAX_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab>=0:print/py-reportlab@${PY_FLAVOR}
FAX_CONFIGURE_ENABLE=	fax-build

SCAN_DESC=		Scanning support
SCAN_RUN_DEPENDS=	${PY_PILLOW}
SCAN_LIB_DEPENDS=	libsane.so:graphics/sane-backends
SCAN_CONFIGURE_ENABLE=	scan-build

SNMP_DESC=		Network/JetDirect support
SNMP_USES=		ssl
SNMP_LIB_DEPENDS=	libnetsnmp.so:net-mgmt/net-snmp
SNMP_CONFIGURE_ENABLE=	network-build

X11_DESC=		Graphical User Interface (Qt)
X11_CONFIGURE_ENABLE=	gui-build qt5
X11_USES=		pyqt:5
X11_USE=		PYQT=core_run,dbussupport_run,gui_run,widgets_run

XSANE_DESC=		Install XSane for scanning (implies SCAN)
XSANE_IMPLIES=		SCAN
XSANE_RUN_DEPENDS=	xsane:graphics/xsane

post-patch:
	@${REINPLACE_CMD} -e 's|-ldld||g;' \
		-e 's|-ldl||g' \
		-e 's,-lusb-1.0,-lusb,g' \
		-e 's,libusb-1.0/libusb.h,libusb.h,g' \
		${WRKSRC}/configure \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e '/[[:space:]]install-dist_rulesDATA/ s,install-dist_rulesDATA,,' \
		-e '/[[:space:]]install-dist_rulessystemDATA/ s,install-dist_rulessystemDATA,,' \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e 's,/etc/hp,${PREFIX}&,g' \
		-e 's,/etc/cups,${LOCALBASE}&,g' \
		-e 's,/etc/init.d,${LOCALBASE}/etc/rc.d,g' \
		-e 's,/etc/sane.d,${LOCALBASE}&,g' \
		-e 's,/usr/share,${LOCALBASE}/share,g' \
		-e 's,/usr/include,${LOCALBASE}/include,g' \
		${WRKSRC}/Makefile.in \
		${WRKSRC}/base/codes.py \
		${WRKSRC}/base/g.py \
		${WRKSRC}/base/password.py \
		${WRKSRC}/base/pkit.py \
		${WRKSRC}/base/queues.py \
		${WRKSRC}/base/services.py \
		${WRKSRC}/base/utils.py \
		${WRKSRC}/check.py \
		${WRKSRC}/fax/backend/hpfax.py \
		${WRKSRC}/fax/coverpages.py \
		${WRKSRC}/fax/filters/pstotiff \
		${WRKSRC}/hplip.list.in \
		${WRKSRC}/installer/core_install.py \
		${WRKSRC}/installer/dcheck.py \
		${WRKSRC}/installer/pluginhandler.py \
		${WRKSRC}/logcapture.py \
		${WRKSRC}/prnt/cups.py \
		${WRKSRC}/prnt/filters/hpps \
		${WRKSRC}/prnt/hpcups/HPCupsFilter.cpp \
		${WRKSRC}/prnt/hpijs/globals.cpp \
		${WRKSRC}/prnt/hpijs/hpcupsfax.cpp \
		${WRKSRC}/prnt/hpijs/hpijs.cpp \
		${WRKSRC}/ui/devmgr4.py \
		${WRKSRC}/ui4/devmgr5.py \
		${WRKSRC}/ui5/devmgr5.py
	@${REINPLACE_CMD} -e 's/umask(0)/umask(0o022)/' \
		-e 's/umask(0o111)/umask(0o133)/' \
		${WRKSRC}/base/os_utils.py \
		${WRKSRC}/base/validation.py \
		${WRKSRC}/fax/backend/hpfax.py \
		${WRKSRC}/hpdio.py \
		${WRKSRC}/installer/pluginhandler.py

post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/hp/hplip.conf \
		${STAGEDIR}${PREFIX}/etc/hp/hplip.conf.sample
	${MKDIR} ${STAGEDIR}${DATADIR}/ui4/plugins
	${MKDIR} ${STAGEDIR}/var/lib/hp

post-install-SCAN-on:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/sane.d/dll.d
	${MV} ${STAGEDIR}${PREFIX}/etc/sane.d/dll.conf \
		${STAGEDIR}${PREFIX}/etc/sane.d/dll.d/hpaio

.include <bsd.port.mk>

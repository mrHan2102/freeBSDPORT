PORTNAME=	korganizer
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Calendar and scheduling Program

DEPRECATED=	Uses EOL Python 2.7 via www/qt5-webengine
EXPIRATION_DATE=2021-06-23

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake compiler:c++11-lib desktop-file-utils gettext gl kde:5 qt:5 tar:xz
USE_GL=		gl
USE_KDE=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons guiaddons i18n iconthemes \
		itemmodels itemviews jobwidgets kcmutils kdelibs4support kio \
		newstuff notifications parts service solid sonnet textwidgets \
		unitconversion wallet widgetsaddons windowsystem xmlgui \
		ecm_build
# pim components
USE_KDE+=	akonadi akonadicalendar akonadicontacts akonadimime \
		akonadinotes akonadisearch calendarcore calendarsupport \
		calendarutils contacts eventviews grantleetheme holidays identitymanagement \
		imap incidenceeditor kontactinterface ldap \
		libkdepim mailtransport mime pimcommon pimtextedit \
		kdepim-runtime5_run
USE_QT=		concurrent core dbus gui multimedia network phonon4 printsupport widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>

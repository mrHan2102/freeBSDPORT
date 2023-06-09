PORTNAME=	muse-sequencer
DISTVERSION=	4.0.0
PORTREVISION=	1
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Digital audio workstation (DAW) with support for both Audio and MIDI

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/ladspa.h:audio/ladspa \
		lv2>0:audio/lv2
LIB_DEPENDS=	libinstpatch-1.0.so:audio/libinstpatch libjack.so:audio/jack \
		liblash.so:audio/lash \
		liblilv-0.so:audio/lilv \
		liblo.so:audio/liblo \
		librtaudio.so:audio/rtaudio \
		liblrdf.so:textproc/liblrdf \
		libsamplerate.so:audio/libsamplerate \
		libserd-0.so:devel/serd \
		libsndfile.so:audio/libsndfile \
		libsord-0.so:devel/sord \
		libsratom-0.so:audio/sratom

USES=		cmake compiler:c++11-lib desktop-file-utils gnome localbase:ldflags qt:5 pkgconfig python shared-mime-info shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	muse-sequencer
GH_PROJECT=	muse
GH_TAGNAME=	4.0.0
SHEBANG_FILES=	share/scripts/* utils/muse-find-unused-wavs utils/muse-song-convert.py
USE_QT=		core gui svg xml widgets buildtools_build linguisttools_build qmake_build uitools_build
USE_GNOME=	atk atkmm cairo cairomm gdkpixbuf2 glib20 glibmm gtk20 gtkmm24 libsigc++20 pango pangomm
USE_LDCONFIG=	yes

CMAKE_OFF=	ENABLE_ALSA ENABLE_DSSI

WRKSRC_SUBDIR=	src

DATADIR=	${PREFIX}/share/muse-4.0
DOCSDIR=	${PREFIX}/share/doc/muse-4.0

OPTIONS_DEFINE=		FLUIDSYNTH DOCS
OPTIONS_DEFAULT=	FLUIDSYNTH
OPTIONS_SUB=		yes

FLUIDSYNTH_DESC=	Enable fluidsynth softsynth plugins
FLUIDSYNTH_CMAKE_BOOL=	ENABLE_FLUID
FLUIDSYNTH_LIB_DEPENDS=	libfluidsynth.so:audio/fluidsynth

PORTDOCS=	*

.include <bsd.port.mk>

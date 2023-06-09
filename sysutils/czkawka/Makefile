PORTNAME=	czkawka
DISTVERSION=	3.3.1
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Multi functional app to find duplicates, empty folders, similar images etc.

LICENSE=	CC-BY-4.0 MIT
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo gnome
USE_GITHUB=	yes
USE_GNOME=	gtk30
GH_ACCOUNT=	qarmin
PLIST_FILES=	bin/${PORTNAME}_cli \
		bin/${PORTNAME}_gui \
		share/applications/com.github.qarmin.czkawka.desktop \
		share/icons/hicolor/scalable/apps/com.github.qarmin.czkawka-symbolic.svg \
		share/icons/hicolor/scalable/apps/com.github.qarmin.czkawka.Devel.svg \
		share/icons/hicolor/scalable/apps/com.github.qarmin.czkawka.svg \
		share/metainfo/com.github.qarmin.czkawka.metainfo.xml \
		${NULL}

CARGO_CRATES=	adler-1.0.2 \
		adler32-1.2.0 \
		alsa-0.5.0 \
		alsa-sys-0.3.1 \
		ansi_term-0.11.0 \
		anyhow-1.0.45 \
		arrayref-0.3.6 \
		arrayvec-0.7.2 \
		atk-0.14.0 \
		atk-sys-0.14.0 \
		atty-0.2.14 \
		audiotags-0.2.7182 \
		audiotags-dev-macro-0.1.4 \
		autocfg-1.0.1 \
		base64-0.13.0 \
		bindgen-0.56.0 \
		bitflags-1.3.2 \
		bk-tree-0.4.0 \
		blake3-1.2.0 \
		bumpalo-3.8.0 \
		bytemuck-1.7.2 \
		byteorder-1.4.3 \
		bytes-1.1.0 \
		bzip2-0.4.3 \
		bzip2-sys-0.1.11+1.0.8 \
		cairo-rs-0.14.9 \
		cairo-sys-rs-0.14.9 \
		cc-1.0.72 \
		cesu8-1.1.0 \
		cexpr-0.4.0 \
		cfg-expr-0.8.1 \
		cfg-if-1.0.0 \
		chrono-0.4.19 \
		clang-sys-1.3.0 \
		clap-2.33.3 \
		claxon-0.4.3 \
		color_quant-1.1.0 \
		combine-4.6.2 \
		constant_time_eq-0.1.5 \
		core-foundation-sys-0.8.3 \
		coreaudio-rs-0.10.0 \
		coreaudio-sys-0.2.8 \
		cpal-0.13.4 \
		crc32fast-1.2.1 \
		crossbeam-channel-0.5.1 \
		crossbeam-deque-0.8.1 \
		crossbeam-epoch-0.9.5 \
		crossbeam-utils-0.8.5 \
		darling-0.10.2 \
		darling_core-0.10.2 \
		darling_macro-0.10.2 \
		deflate-0.8.6 \
		derivative-2.2.0 \
		digest-0.9.0 \
		directories-next-2.0.0 \
		dirs-sys-next-0.1.2 \
		either-1.6.1 \
		field-offset-0.3.4 \
		flate2-1.0.22 \
		fnv-1.0.7 \
		fs_extra-1.2.0 \
		futures-0.3.17 \
		futures-channel-0.3.17 \
		futures-core-0.3.17 \
		futures-executor-0.3.17 \
		futures-io-0.3.17 \
		futures-macro-0.3.17 \
		futures-sink-0.3.17 \
		futures-task-0.3.17 \
		futures-util-0.3.17 \
		gdk-0.14.3 \
		gdk-pixbuf-0.14.0 \
		gdk-pixbuf-sys-0.14.0 \
		gdk-sys-0.14.0 \
		generic-array-0.14.4 \
		getrandom-0.2.3 \
		gif-0.11.3 \
		gio-0.14.8 \
		gio-sys-0.14.0 \
		glib-0.14.8 \
		glib-macros-0.14.1 \
		glib-sys-0.14.0 \
		glob-0.3.0 \
		gobject-sys-0.14.0 \
		gtk-0.14.3 \
		gtk-sys-0.14.0 \
		gtk3-macros-0.14.0 \
		hamming-0.1.3 \
		heck-0.3.3 \
		hermit-abi-0.1.19 \
		hex-0.4.3 \
		hound-3.4.0 \
		humansize-1.1.1 \
		id3-0.5.3 \
		ident_case-1.0.1 \
		image-0.23.14 \
		img_hash-3.2.0 \
		instant-0.1.12 \
		itertools-0.10.1 \
		jni-0.19.0 \
		jni-sys-0.3.0 \
		jobserver-0.1.24 \
		jpeg-decoder-0.1.22 \
		js-sys-0.3.55 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		lewton-0.10.2 \
		libc-0.2.107 \
		libloading-0.7.1 \
		lock_api-0.4.5 \
		log-0.4.14 \
		mach-0.3.2 \
		memchr-2.4.1 \
		memoffset-0.6.4 \
		metaflac-0.2.5 \
		minimp3-0.5.1 \
		minimp3-sys-0.3.2 \
		miniz_oxide-0.3.7 \
		miniz_oxide-0.4.4 \
		mp4ameta-0.6.1 \
		mp4ameta_proc-0.1.1 \
		ndk-0.3.0 \
		ndk-0.4.0 \
		ndk-glue-0.3.0 \
		ndk-glue-0.4.0 \
		ndk-macro-0.2.0 \
		ndk-sys-0.2.1 \
		nix-0.20.0 \
		nom-5.1.2 \
		num-complex-0.2.4 \
		num-derive-0.3.3 \
		num-integer-0.1.44 \
		num-iter-0.1.42 \
		num-rational-0.3.2 \
		num-traits-0.2.14 \
		num_cpus-1.13.0 \
		num_enum-0.5.4 \
		num_enum_derive-0.5.4 \
		oboe-0.4.4 \
		oboe-sys-0.4.4 \
		ogg-0.8.0 \
		once_cell-1.8.0 \
		open-2.0.1 \
		pango-0.14.8 \
		pango-sys-0.14.0 \
		parking_lot-0.11.2 \
		parking_lot_core-0.8.5 \
		pathdiff-0.2.1 \
		peeking_take_while-0.1.2 \
		pest-2.1.3 \
		pin-project-lite-0.2.7 \
		pin-utils-0.1.0 \
		pkg-config-0.3.22 \
		png-0.16.8 \
		ppv-lite86-0.2.15 \
		proc-macro-crate-0.1.5 \
		proc-macro-crate-1.1.0 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro-hack-0.5.19 \
		proc-macro-nested-0.1.7 \
		proc-macro2-1.0.32 \
		quote-1.0.10 \
		rand-0.8.4 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rand_hc-0.3.1 \
		rayon-1.5.1 \
		rayon-core-1.9.1 \
		redox_syscall-0.2.10 \
		redox_users-0.4.0 \
		regex-1.5.4 \
		regex-syntax-0.6.25 \
		remove_dir_all-0.5.3 \
		rodio-0.14.0 \
		rustc-hash-1.1.0 \
		rustc_version-0.3.3 \
		rustdct-0.4.0 \
		rustfft-3.0.1 \
		same-file-1.0.6 \
		scoped_threadpool-0.1.9 \
		scopeguard-1.1.0 \
		semver-0.11.0 \
		semver-parser-0.10.2 \
		serde-1.0.130 \
		serde_derive-1.0.130 \
		shlex-0.1.1 \
		slab-0.4.5 \
		slice-deque-0.3.0 \
		smallvec-1.7.0 \
		stdweb-0.1.3 \
		strength_reduce-0.2.3 \
		strsim-0.8.0 \
		strsim-0.9.3 \
		structopt-0.3.25 \
		structopt-derive-0.4.18 \
		strum-0.21.0 \
		strum_macros-0.21.1 \
		syn-1.0.81 \
		system-deps-3.2.0 \
		tempfile-3.2.0 \
		textwrap-0.11.0 \
		thiserror-1.0.30 \
		thiserror-impl-1.0.30 \
		tiff-0.6.1 \
		time-0.1.44 \
		tinyvec-1.5.1 \
		tinyvec_macros-0.1.0 \
		toml-0.5.8 \
		transpose-0.1.0 \
		transpose-0.2.1 \
		trash-1.3.0 \
		triple_accel-0.3.4 \
		typenum-1.14.0 \
		ucd-trie-0.1.3 \
		unicode-segmentation-1.8.0 \
		unicode-width-0.1.9 \
		unicode-xid-0.2.2 \
		vec_map-0.8.2 \
		version-compare-0.0.11 \
		version_check-0.9.3 \
		walkdir-2.3.2 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.78 \
		wasm-bindgen-backend-0.2.78 \
		wasm-bindgen-macro-0.2.78 \
		wasm-bindgen-macro-support-0.2.78 \
		wasm-bindgen-shared-0.2.78 \
		web-sys-0.3.55 \
		weezl-0.1.5 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		xxhash-rust-0.8.2 \
		zip-0.5.13
# XXX https://github.com/rust-lang/cargo/issues/4101
CARGO_INSTALL_PATH=	${PLIST_FILES:Mbin/*:T}

post-install:
	${INSTALL_DATA} ${WRKSRC}/pkgs/*.desktop \
		${STAGEDIR}${PREFIX}/share/applications
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps
	${INSTALL_DATA} ${WRKSRC}/data/icons/*.svg \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps
	${MKDIR} ${STAGEDIR}${PREFIX}/share/metainfo
	${INSTALL_DATA} ${WRKSRC}/data/*.metainfo.xml \
		${STAGEDIR}${PREFIX}/share/metainfo

.include <bsd.port.mk>

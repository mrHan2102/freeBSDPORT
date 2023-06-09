PORTNAME=	go-btfs
PORTVERSION=	1.6.0
DISTVERSIONPREFIX=	btfs-v
CATEGORIES=	sysutils

MAINTAINER=	mikael@FreeBSD.org
COMMENT=	First Scalable Decentralized Storage System

LICENSE=	APACHE20 MIT
LICENSE_COMB=	multi
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	TRON-US
GH_TUPLE=	\
		AndreasBriese:bbloom:e2d15f34fcf9:andreasbriese_bbloom/vendor/github.com/AndreasBriese/bbloom \
		FactomProject:basen:fe3947df716e:factomproject_basen/vendor/github.com/FactomProject/basen \
		FactomProject:btcutilecc:d3a63a5752ec:factomproject_btcutilecc/vendor/github.com/FactomProject/btcutilecc \
		Kubuxu:go-os-helper:v0.0.1:kubuxu_go_os_helper/vendor/github.com/Kubuxu/go-os-helper \
		StackExchange:wmi:cbe66965904d:stackexchange_wmi/vendor/github.com/StackExchange/wmi \
		Stebalien:go-bitfield:v0.0.1:stebalien_go_bitfield/vendor/github.com/Stebalien/go-bitfield \
		TRON-US:go-btfs-api:v0.3.0:tron_us_go_btfs_api/vendor/github.com/TRON-US/go-btfs-api \
		TRON-US:go-btfs-chunker:v0.3.0:tron_us_go_btfs_chunker/vendor/github.com/TRON-US/go-btfs-chunker \
		TRON-US:go-btfs-cmds:v0.2.13:tron_us_go_btfs_cmds/vendor/github.com/TRON-US/go-btfs-cmds \
		TRON-US:go-btfs-config:v0.11.2:tron_us_go_btfs_config/vendor/github.com/TRON-US/go-btfs-config \
		TRON-US:go-btfs-files:v0.2.0:tron_us_go_btfs_files/vendor/github.com/TRON-US/go-btfs-files \
		TRON-US:go-btfs-pinner:v0.1.1:tron_us_go_btfs_pinner/vendor/github.com/TRON-US/go-btfs-pinner \
		TRON-US:go-btns:v0.1.1:tron_us_go_btns/vendor/github.com/TRON-US/go-btns \
		TRON-US:go-car:v0.3.0:tron_us_go_car/vendor/github.com/ipld/go-car \
		TRON-US:go-cid:v0.3.0:tron_us_go_cid/vendor/github.com/ipfs/go-cid \
		TRON-US:go-eccrypto:v0.0.1:tron_us_go_eccrypto/vendor/github.com/TRON-US/go-eccrypto \
		TRON-US:go-graphsync:v0.2.1:tron_us_go_graphsync/vendor/github.com/ipfs/go-graphsync \
		TRON-US:go-ipld-format:v0.2.0:tron_us_go_ipld_format/vendor/github.com/ipfs/go-ipld-format \
		TRON-US:go-ipld-prime-proto:v0.1.0:tron_us_go_ipld_prime_proto/vendor/github.com/ipld/go-ipld-prime-proto \
		TRON-US:go-libp2p-core:v0.7.1:tron_us_go_libp2p_core/vendor/github.com/libp2p/go-libp2p-core \
		TRON-US:go-libp2p-kad-dht:v0.10.1:tron_us_go_libp2p_kad_dht/vendor/github.com/libp2p/go-libp2p-kad-dht \
		TRON-US:go-mfs:v0.3.1:tron_us_go_mfs/vendor/github.com/TRON-US/go-mfs \
		TRON-US:go-multiaddr:v0.4.0:tron_us_go_multiaddr/vendor/github.com/multiformats/go-multiaddr \
		TRON-US:go-path:v0.2.0:tron_us_go_path/vendor/github.com/ipfs/go-path \
		TRON-US:go-unixfs:v0.6.1:tron_us_go_unixfs/vendor/github.com/TRON-US/go-unixfs \
		TRON-US:interface-go-btfs-core:v0.7.0:tron_us_interface_go_btfs_core/vendor/github.com/TRON-US/interface-go-btfs-core \
		Workiva:go-datastructures:v1.0.52:workiva_go_datastructures/vendor/github.com/Workiva/go-datastructures \
		alecthomas:kingpin:v2.2.6:alecthomas_kingpin/vendor/gopkg.in/alecthomas/kingpin.v2 \
		alecthomas:template:fb15b899a751:alecthomas_template/vendor/github.com/alecthomas/template \
		alecthomas:units:f65c72e2690d:alecthomas_units/vendor/github.com/alecthomas/units \
		alexbrainman:goissue34681:3fc7a47baff5:alexbrainman_goissue34681/vendor/github.com/alexbrainman/goissue34681 \
		andybalholm:brotli:5f990b63d2d6:andybalholm_brotli/vendor/github.com/andybalholm/brotli \
		bazil:fuse:7b5117fecadc:bazil_fuse/vendor/bazil.org/fuse \
		benbjohnson:clock:v1.0.3:benbjohnson_clock/vendor/github.com/benbjohnson/clock \
		beorn7:perks:v1.0.1:beorn7_perks/vendor/github.com/beorn7/perks \
		blang:semver:v3.5.1:blang_semver/vendor/github.com/blang/semver \
		bren2010:proquint:38337c27106d:bren2010_proquint/vendor/github.com/bren2010/proquint \
		btcsuite:btcd:v0.20.1-beta:btcsuite_btcd/vendor/github.com/btcsuite/btcd \
		btcsuite:btcutil:v1.0.2:btcsuite_btcutil/vendor/github.com/btcsuite/btcutil \
		cenkalti:backoff:v2.2.1:cenkalti_backoff/vendor/github.com/cenkalti/backoff \
		cenkalti:backoff:v4.0.2:cenkalti_backoff_v4/vendor/github.com/cenkalti/backoff/v4 \
		census-instrumentation:opencensus-go:v0.22.4:census_instrumentation_opencensus_go/vendor/go.opencensus.io \
		cespare:xxhash:v1.1.0:cespare_xxhash/vendor/github.com/cespare/xxhash \
		cespare:xxhash:v2.1.1:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
		cheekybits:genny:v1.0.0:cheekybits_genny/vendor/github.com/cheekybits/genny \
		cheggaaa:pb:v1.0.28:cheggaaa_pb/vendor/gopkg.in/cheggaaa/pb.v1 \
		codemodus:kace:v0.5.1:codemodus_kace/vendor/github.com/codemodus/kace \
		coreos:go-semver:v0.3.0:coreos_go_semver/vendor/github.com/coreos/go-semver \
		coreos:go-systemd:v22.1.0:coreos_go_systemd_v22/vendor/github.com/coreos/go-systemd/v22 \
		crackcomm:go-gitignore:887ab5e44cc3:crackcomm_go_gitignore/vendor/github.com/crackcomm/go-gitignore \
		cskr:pubsub:v1.0.2:cskr_pubsub/vendor/github.com/cskr/pubsub \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		davidlazar:go-crypto:dcfb0a7ac018:davidlazar_go_crypto/vendor/github.com/davidlazar/go-crypto \
		dgraph-io:badger:v1.6.1:dgraph_io_badger/vendor/github.com/dgraph-io/badger \
		dgraph-io:ristretto:v0.0.2:dgraph_io_ristretto/vendor/github.com/dgraph-io/ristretto \
		dsnet:compress:v0.0.1:dsnet_compress/vendor/github.com/dsnet/compress \
		dustin:go-humanize:v1.0.0:dustin_go_humanize/vendor/github.com/dustin/go-humanize \
		elgris:jsondiff:765b5c24c302:elgris_jsondiff/vendor/github.com/elgris/jsondiff \
		ethereum:go-ethereum:v1.9.24:ethereum_go_ethereum/vendor/github.com/ethereum/go-ethereum \
		facebookgo:atomicfile:2de1f203e7d5:facebookgo_atomicfile/vendor/github.com/facebookgo/atomicfile \
		flynn:noise:2492fe189ae6:flynn_noise/vendor/github.com/flynn/noise \
		fomichev:secp256k1:00116ff8c62f:fomichev_secp256k1/vendor/github.com/fomichev/secp256k1 \
		francoispqt:gojay:v1.2.13:francoispqt_gojay/vendor/github.com/francoispqt/gojay \
		fsnotify:fsnotify:v1.4.9:fsnotify_fsnotify/vendor/github.com/fsnotify/fsnotify \
		gabriel-vasile:mimetype:v1.1.2:gabriel_vasile_mimetype/vendor/github.com/gabriel-vasile/mimetype \
		go-bindata:go-bindata:v3.1.3:go_bindata_go_bindata_v3/vendor/github.com/go-bindata/go-bindata/v3 \
		go-ole:go-ole:v1.2.4:go_ole_go_ole/vendor/github.com/go-ole/go-ole \
		go-pg:migrations:v7.1.11:go_pg_migrations_v7/vendor/github.com/go-pg/migrations/v7 \
		go-pg:pg:v9.2.0:go_pg_pg_v9/vendor/github.com/go-pg/pg/v9 \
		go-pg:zerochecker:v0.2.0:go_pg_zerochecker/vendor/github.com/go-pg/zerochecker \
		go-redis:redis:v7.4.0:go_redis_redis_v7/vendor/github.com/go-redis/redis/v7 \
		go-yaml:yaml:9f266ea9e77c:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		go-yaml:yaml:v2.3.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		go4org:go4:f5505b9728dd:go4org_go4/vendor/go4.org \
		gobuffalo:here:v0.6.0:gobuffalo_here/vendor/github.com/gobuffalo/here \
		gogo:protobuf:v1.3.1:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.6:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:7f63de1d35b0:golang_crypto/vendor/golang.org/x/crypto \
		golang:gddo:af0f2af80721:golang_gddo/vendor/github.com/golang/gddo \
		golang:lint:738671d3881b:golang_lint/vendor/golang.org/x/lint \
		golang:mod:v0.3.0:golang_mod/vendor/golang.org/x/mod \
		golang:net:69a78807bb2b:golang_net/vendor/golang.org/x/net \
		golang:protobuf:v1.4.3:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:snappy:196ae77b8a26:golang_snappy/vendor/github.com/golang/snappy \
		golang:sync:6e8e738ad208:golang_sync/vendor/golang.org/x/sync \
		golang:sys:5cba982894dd:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.4:golang_text/vendor/golang.org/x/text \
		golang:tools:17fd2f27a9e3:golang_tools/vendor/golang.org/x/tools \
		golang:xerrors:5ec99f83aff1:golang_xerrors/vendor/golang.org/x/xerrors \
		google:go-genproto:cb27e3aa2013:google_go_genproto/vendor/google.golang.org/genproto \
		google:gopacket:v1.1.18:google_gopacket/vendor/github.com/google/gopacket \
		google:uuid:v1.1.2:google_uuid/vendor/github.com/google/uuid \
		gorilla:websocket:v1.4.2:gorilla_websocket/vendor/github.com/gorilla/websocket \
		grpc-ecosystem:go-grpc-middleware:v1.2.2:grpc_ecosystem_go_grpc_middleware/vendor/github.com/grpc-ecosystem/go-grpc-middleware \
		grpc-ecosystem:go-grpc-prometheus:v1.2.0:grpc_ecosystem_go_grpc_prometheus/vendor/github.com/grpc-ecosystem/go-grpc-prometheus \
		grpc:grpc-go:v1.34.0:grpc_grpc_go/vendor/google.golang.org/grpc \
		hannahhoward:go-pubsub:8d62886cc36e:hannahhoward_go_pubsub/vendor/github.com/hannahhoward/go-pubsub \
		hashicorp:errwrap:v1.0.0:hashicorp_errwrap/vendor/github.com/hashicorp/errwrap \
		hashicorp:go-multierror:v1.1.0:hashicorp_go_multierror/vendor/github.com/hashicorp/go-multierror \
		hashicorp:golang-lru:v0.5.4:hashicorp_golang_lru/vendor/github.com/hashicorp/golang-lru \
		huin:goupnp:v1.0.0:huin_goupnp/vendor/github.com/huin/goupnp \
		hypnoglow:go-pg-monitor:v0.1.0:hypnoglow_go_pg_monitor/vendor/github.com/hypnoglow/go-pg-monitor \
		ipfs:bbloom:v0.0.4:ipfs_bbloom/vendor/github.com/ipfs/bbloom \
		ipfs:go-bitswap:v0.2.20:ipfs_go_bitswap/vendor/github.com/ipfs/go-bitswap \
		ipfs:go-block-format:v0.0.2:ipfs_go_block_format/vendor/github.com/ipfs/go-block-format \
		ipfs:go-blockservice:v0.1.3:ipfs_go_blockservice/vendor/github.com/ipfs/go-blockservice \
		ipfs:go-cidutil:v0.0.2:ipfs_go_cidutil/vendor/github.com/ipfs/go-cidutil \
		ipfs:go-datastore:v0.4.5:ipfs_go_datastore/vendor/github.com/ipfs/go-datastore \
		ipfs:go-detect-race:v0.0.1:ipfs_go_detect_race/vendor/github.com/ipfs/go-detect-race \
		ipfs:go-ds-badger:v0.2.4:ipfs_go_ds_badger/vendor/github.com/ipfs/go-ds-badger \
		ipfs:go-ds-flatfs:v0.4.5:ipfs_go_ds_flatfs/vendor/github.com/ipfs/go-ds-flatfs \
		ipfs:go-ds-leveldb:v0.4.2:ipfs_go_ds_leveldb/vendor/github.com/ipfs/go-ds-leveldb \
		ipfs:go-ds-measure:v0.1.0:ipfs_go_ds_measure/vendor/github.com/ipfs/go-ds-measure \
		ipfs:go-filestore:v0.0.3:ipfs_go_filestore/vendor/github.com/ipfs/go-filestore \
		ipfs:go-fs-lock:v0.0.6:ipfs_go_fs_lock/vendor/github.com/ipfs/go-fs-lock \
		ipfs:go-ipfs-blockstore:v0.1.4:ipfs_go_ipfs_blockstore/vendor/github.com/ipfs/go-ipfs-blockstore \
		ipfs:go-ipfs-delay:v0.0.1:ipfs_go_ipfs_delay/vendor/github.com/ipfs/go-ipfs-delay \
		ipfs:go-ipfs-ds-help:v0.1.1:ipfs_go_ipfs_ds_help/vendor/github.com/ipfs/go-ipfs-ds-help \
		ipfs:go-ipfs-exchange-interface:v0.0.1:ipfs_go_ipfs_exchange_interface/vendor/github.com/ipfs/go-ipfs-exchange-interface \
		ipfs:go-ipfs-exchange-offline:v0.0.1:ipfs_go_ipfs_exchange_offline/vendor/github.com/ipfs/go-ipfs-exchange-offline \
		ipfs:go-ipfs-posinfo:v0.0.1:ipfs_go_ipfs_posinfo/vendor/github.com/ipfs/go-ipfs-posinfo \
		ipfs:go-ipfs-pq:v0.0.2:ipfs_go_ipfs_pq/vendor/github.com/ipfs/go-ipfs-pq \
		ipfs:go-ipfs-provider:v0.4.3:ipfs_go_ipfs_provider/vendor/github.com/ipfs/go-ipfs-provider \
		ipfs:go-ipfs-routing:v0.1.0:ipfs_go_ipfs_routing/vendor/github.com/ipfs/go-ipfs-routing \
		ipfs:go-ipfs-util:v0.0.2:ipfs_go_ipfs_util/vendor/github.com/ipfs/go-ipfs-util \
		ipfs:go-ipld-cbor:v0.0.4:ipfs_go_ipld_cbor/vendor/github.com/ipfs/go-ipld-cbor \
		ipfs:go-ipld-git:v0.0.3:ipfs_go_ipld_git/vendor/github.com/ipfs/go-ipld-git \
		ipfs:go-log:v1.0.4:ipfs_go_log/vendor/github.com/ipfs/go-log \
		ipfs:go-log:v2.1.1:ipfs_go_log_v2/vendor/github.com/ipfs/go-log/v2 \
		ipfs:go-merkledag:v0.3.2:ipfs_go_merkledag/vendor/github.com/ipfs/go-merkledag \
		ipfs:go-metrics-interface:v0.0.1:ipfs_go_metrics_interface/vendor/github.com/ipfs/go-metrics-interface \
		ipfs:go-metrics-prometheus:v0.0.2:ipfs_go_metrics_prometheus/vendor/github.com/ipfs/go-metrics-prometheus \
		ipfs:go-peertaskqueue:v0.2.0:ipfs_go_peertaskqueue/vendor/github.com/ipfs/go-peertaskqueue \
		ipfs:go-verifcid:v0.0.1:ipfs_go_verifcid/vendor/github.com/ipfs/go-verifcid \
		ipld:go-ipld-prime:109253e8a018:ipld_go_ipld_prime/vendor/github.com/ipld/go-ipld-prime \
		jackpal:go-nat-pmp:v1.0.2:jackpal_go_nat_pmp/vendor/github.com/jackpal/go-nat-pmp \
		jbenet:go-is-domain:v1.0.5:jbenet_go_is_domain/vendor/github.com/jbenet/go-is-domain \
		jbenet:go-random:123a90aedc0c:jbenet_go_random/vendor/github.com/jbenet/go-random \
		jbenet:go-temp-err-catcher:v0.1.0:jbenet_go_temp_err_catcher/vendor/github.com/jbenet/go-temp-err-catcher \
		jbenet:goprocess:v0.1.4:jbenet_goprocess/vendor/github.com/jbenet/goprocess \
		jinzhu:inflection:v1.0.0:jinzhu_inflection/vendor/github.com/jinzhu/inflection \
		json-iterator:go:v1.1.10:json_iterator_go/vendor/github.com/json-iterator/go \
		kisielk:errcheck:v1.2.0:kisielk_errcheck/vendor/github.com/kisielk/errcheck \
		klauspost:compress:v1.9.2:klauspost_compress/vendor/github.com/klauspost/compress \
		klauspost:cpuid:v1.2.4:klauspost_cpuid/vendor/github.com/klauspost/cpuid \
		klauspost:pgzip:v1.2.1:klauspost_pgzip/vendor/github.com/klauspost/pgzip \
		klauspost:reedsolomon:v1.9.9:klauspost_reedsolomon/vendor/github.com/klauspost/reedsolomon \
		konsorten:go-windows-terminal-sequences:v1.0.3:konsorten_go_windows_terminal_sequences/vendor/github.com/konsorten/go-windows-terminal-sequences \
		koron:go-ssdp:2e1c40ed0b5d:koron_go_ssdp/vendor/github.com/koron/go-ssdp \
		libp2p:go-addr-util:v0.0.2:libp2p_go_addr_util/vendor/github.com/libp2p/go-addr-util \
		libp2p:go-buffer-pool:v0.0.2:libp2p_go_buffer_pool/vendor/github.com/libp2p/go-buffer-pool \
		libp2p:go-cidranger:v1.1.0:libp2p_go_cidranger/vendor/github.com/libp2p/go-cidranger \
		libp2p:go-conn-security-multistream:v0.2.0:libp2p_go_conn_security_multistream/vendor/github.com/libp2p/go-conn-security-multistream \
		libp2p:go-eventbus:v0.2.1:libp2p_go_eventbus/vendor/github.com/libp2p/go-eventbus \
		libp2p:go-flow-metrics:v0.0.3:libp2p_go_flow_metrics/vendor/github.com/libp2p/go-flow-metrics \
		libp2p:go-libp2p-asn-util:85005c6cf052:libp2p_go_libp2p_asn_util/vendor/github.com/libp2p/go-libp2p-asn-util \
		libp2p:go-libp2p-autonat:v0.3.2:libp2p_go_libp2p_autonat/vendor/github.com/libp2p/go-libp2p-autonat \
		libp2p:go-libp2p-blankhost:v0.2.0:libp2p_go_libp2p_blankhost/vendor/github.com/libp2p/go-libp2p-blankhost \
		libp2p:go-libp2p-circuit:v0.3.1:libp2p_go_libp2p_circuit/vendor/github.com/libp2p/go-libp2p-circuit \
		libp2p:go-libp2p-connmgr:v0.2.4:libp2p_go_libp2p_connmgr/vendor/github.com/libp2p/go-libp2p-connmgr \
		libp2p:go-libp2p-crypto:v0.1.0:libp2p_go_libp2p_crypto/vendor/github.com/libp2p/go-libp2p-crypto \
		libp2p:go-libp2p-discovery:v0.5.0:libp2p_go_libp2p_discovery/vendor/github.com/libp2p/go-libp2p-discovery \
		libp2p:go-libp2p-gostream:v0.2.1:libp2p_go_libp2p_gostream/vendor/github.com/libp2p/go-libp2p-gostream \
		libp2p:go-libp2p-http:v0.1.5:libp2p_go_libp2p_http/vendor/github.com/libp2p/go-libp2p-http \
		libp2p:go-libp2p-kbucket:v0.4.7:libp2p_go_libp2p_kbucket/vendor/github.com/libp2p/go-libp2p-kbucket \
		libp2p:go-libp2p-loggables:v0.1.0:libp2p_go_libp2p_loggables/vendor/github.com/libp2p/go-libp2p-loggables \
		libp2p:go-libp2p-metrics:v0.1.0:libp2p_go_libp2p_metrics/vendor/github.com/libp2p/go-libp2p-metrics \
		libp2p:go-libp2p-mplex:v0.3.0:libp2p_go_libp2p_mplex/vendor/github.com/libp2p/go-libp2p-mplex \
		libp2p:go-libp2p-nat:v0.0.6:libp2p_go_libp2p_nat/vendor/github.com/libp2p/go-libp2p-nat \
		libp2p:go-libp2p-netutil:v0.1.0:libp2p_go_libp2p_netutil/vendor/github.com/libp2p/go-libp2p-netutil \
		libp2p:go-libp2p-noise:v0.1.2:libp2p_go_libp2p_noise/vendor/github.com/libp2p/go-libp2p-noise \
		libp2p:go-libp2p-peer:v0.2.0:libp2p_go_libp2p_peer/vendor/github.com/libp2p/go-libp2p-peer \
		libp2p:go-libp2p-peerstore:v0.2.6:libp2p_go_libp2p_peerstore/vendor/github.com/libp2p/go-libp2p-peerstore \
		libp2p:go-libp2p-pnet:v0.2.0:libp2p_go_libp2p_pnet/vendor/github.com/libp2p/go-libp2p-pnet \
		libp2p:go-libp2p-pubsub-router:v0.3.2:libp2p_go_libp2p_pubsub_router/vendor/github.com/libp2p/go-libp2p-pubsub-router \
		libp2p:go-libp2p-pubsub:v0.3.5:libp2p_go_libp2p_pubsub/vendor/github.com/libp2p/go-libp2p-pubsub \
		libp2p:go-libp2p-quic-transport:v0.8.0:libp2p_go_libp2p_quic_transport/vendor/github.com/libp2p/go-libp2p-quic-transport \
		libp2p:go-libp2p-record:v0.1.3:libp2p_go_libp2p_record/vendor/github.com/libp2p/go-libp2p-record \
		libp2p:go-libp2p-routing-helpers:v0.2.3:libp2p_go_libp2p_routing_helpers/vendor/github.com/libp2p/go-libp2p-routing-helpers \
		libp2p:go-libp2p-secio:v0.2.2:libp2p_go_libp2p_secio/vendor/github.com/libp2p/go-libp2p-secio \
		libp2p:go-libp2p-swarm:v0.2.8:libp2p_go_libp2p_swarm/vendor/github.com/libp2p/go-libp2p-swarm \
		libp2p:go-libp2p-testing:v0.3.0:libp2p_go_libp2p_testing/vendor/github.com/libp2p/go-libp2p-testing \
		libp2p:go-libp2p-tls:v0.1.3:libp2p_go_libp2p_tls/vendor/github.com/libp2p/go-libp2p-tls \
		libp2p:go-libp2p-transport-upgrader:v0.3.0:libp2p_go_libp2p_transport_upgrader/vendor/github.com/libp2p/go-libp2p-transport-upgrader \
		libp2p:go-libp2p-yamux:v0.2.8:libp2p_go_libp2p_yamux/vendor/github.com/libp2p/go-libp2p-yamux \
		libp2p:go-libp2p:v0.11.0:libp2p_go_libp2p/vendor/github.com/libp2p/go-libp2p \
		libp2p:go-mplex:v0.2.0:libp2p_go_mplex/vendor/github.com/libp2p/go-mplex \
		libp2p:go-msgio:v0.0.6:libp2p_go_msgio/vendor/github.com/libp2p/go-msgio \
		libp2p:go-nat:v0.0.5:libp2p_go_nat/vendor/github.com/libp2p/go-nat \
		libp2p:go-netroute:v0.1.3:libp2p_go_netroute/vendor/github.com/libp2p/go-netroute \
		libp2p:go-openssl:v0.0.7:libp2p_go_openssl/vendor/github.com/libp2p/go-openssl \
		libp2p:go-reuseport-transport:v0.0.4:libp2p_go_reuseport_transport/vendor/github.com/libp2p/go-reuseport-transport \
		libp2p:go-reuseport:v0.0.2:libp2p_go_reuseport/vendor/github.com/libp2p/go-reuseport \
		libp2p:go-sockaddr:v0.0.2:libp2p_go_sockaddr/vendor/github.com/libp2p/go-sockaddr \
		libp2p:go-socket-activation:v0.0.2:libp2p_go_socket_activation/vendor/github.com/libp2p/go-socket-activation \
		libp2p:go-stream-muxer-multistream:v0.3.0:libp2p_go_stream_muxer_multistream/vendor/github.com/libp2p/go-stream-muxer-multistream \
		libp2p:go-tcp-transport:v0.2.1:libp2p_go_tcp_transport/vendor/github.com/libp2p/go-tcp-transport \
		libp2p:go-testutil:v0.1.0:libp2p_go_testutil/vendor/github.com/libp2p/go-testutil \
		libp2p:go-ws-transport:v0.3.1:libp2p_go_ws_transport/vendor/github.com/libp2p/go-ws-transport \
		libp2p:go-yamux:v1.3.7:libp2p_go_yamux/vendor/github.com/libp2p/go-yamux \
		looplab:fsm:v0.1.0:looplab_fsm/vendor/github.com/looplab/fsm \
		lucas-clemente:quic-go:v0.18.0:lucas_clemente_quic_go/vendor/github.com/lucas-clemente/quic-go \
		markbates:pkger:v0.17.0:markbates_pkger/vendor/github.com/markbates/pkger \
		marten-seemann:qtls-go1-15:v0.1.0:marten_seemann_qtls_go1_15/vendor/github.com/marten-seemann/qtls-go1-15 \
		marten-seemann:qtls:v0.10.0:marten_seemann_qtls/vendor/github.com/marten-seemann/qtls \
		mattn:go-colorable:v0.1.2:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.8:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.4:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
		matttproud:golang_protobuf_extensions:v1.0.1:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		mellium:sasl:v0.2.1:mellium_sasl/vendor/mellium.im/sasl \
		mgutz:ansi:9520e82c474b:mgutz_ansi/vendor/github.com/mgutz/ansi \
		mholt:archiver:v3.3.0:mholt_archiver_v3/vendor/github.com/mholt/archiver/v3 \
		miekg:dns:v1.1.31:miekg_dns/vendor/github.com/miekg/dns \
		minio:blake2b-simd:3f5f724cb5b1:minio_blake2b_simd/vendor/github.com/minio/blake2b-simd \
		minio:sha256-simd:v0.1.1:minio_sha256_simd/vendor/github.com/minio/sha256-simd \
		mitchellh:go-homedir:v1.1.0:mitchellh_go_homedir/vendor/github.com/mitchellh/go-homedir \
		mmcloughlin:avo:4439b6b2c061:mmcloughlin_avo/vendor/github.com/mmcloughlin/avo \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		mr-tron:base58:v1.2.0:mr_tron_base58/vendor/github.com/mr-tron/base58 \
		multiformats:go-base32:v0.0.3:multiformats_go_base32/vendor/github.com/multiformats/go-base32 \
		multiformats:go-base36:v0.1.0:multiformats_go_base36/vendor/github.com/multiformats/go-base36 \
		multiformats:go-multiaddr-dns:v0.2.0:multiformats_go_multiaddr_dns/vendor/github.com/multiformats/go-multiaddr-dns \
		multiformats:go-multiaddr-fmt:v0.1.0:multiformats_go_multiaddr_fmt/vendor/github.com/multiformats/go-multiaddr-fmt \
		multiformats:go-multiaddr-net:v0.2.0:multiformats_go_multiaddr_net/vendor/github.com/multiformats/go-multiaddr-net \
		multiformats:go-multibase:v0.0.3:multiformats_go_multibase/vendor/github.com/multiformats/go-multibase \
		multiformats:go-multihash:v0.0.14:multiformats_go_multihash/vendor/github.com/multiformats/go-multihash \
		multiformats:go-multistream:v0.2.0:multiformats_go_multistream/vendor/github.com/multiformats/go-multistream \
		multiformats:go-varint:v0.0.6:multiformats_go_varint/vendor/github.com/multiformats/go-varint \
		natefinch:lumberjack:v2.0.0:natefinch_lumberjack/vendor/gopkg.in/natefinch/lumberjack.v2 \
		nwaples:rardecode:v1.0.0:nwaples_rardecode/vendor/github.com/nwaples/rardecode \
		opentracing:opentracing-go:v1.2.0:opentracing_opentracing_go/vendor/github.com/opentracing/opentracing-go \
		orcaman:concurrent-map:8c72a8bb44f6:orcaman_concurrent_map/vendor/github.com/orcaman/concurrent-map \
		pierrec:lz4:v2.0.5:pierrec_lz4/vendor/github.com/pierrec/lz4 \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		polydawn:refmt:05966cbd336a:polydawn_refmt/vendor/github.com/polydawn/refmt \
		prometheus:client_golang:v1.8.0:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:v0.2.0:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.14.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:v0.2.0:prometheus_procfs/vendor/github.com/prometheus/procfs \
		protocolbuffers:protobuf-go:v1.25.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		rs:cors:v1.7.0:rs_cors/vendor/github.com/rs/cors \
		segmentio:encoding:v0.1.15:segmentio_encoding/vendor/github.com/segmentio/encoding \
		shirou:gopsutil:v3.20.12:shirou_gopsutil_v3/vendor/github.com/shirou/gopsutil \
		sirupsen:logrus:v1.6.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spacemonkeygo:spacelog:2296661a0572:spacemonkeygo_spacelog/vendor/github.com/spacemonkeygo/spacelog \
		spaolacci:murmur3:v1.1.0:spaolacci_murmur3/vendor/github.com/spaolacci/murmur3 \
		status-im:keycard-go:8537d3370df4:status_im_keycard_go/vendor/github.com/status-im/keycard-go \
		stretchr:testify:v1.6.1:stretchr_testify/vendor/github.com/stretchr/testify \
		syndtr:goleveldb:5c35d600f0ca:syndtr_goleveldb/vendor/github.com/syndtr/goleveldb \
		texttheater:golang-levenshtein:d188e65d659e:texttheater_golang_levenshtein/vendor/github.com/texttheater/golang-levenshtein \
		thedevsaddam:gojsonq:v2.5.2:thedevsaddam_gojsonq_v2/vendor/github.com/thedevsaddam/gojsonq/v2 \
		tron-us:go-btfs-common:v0.7.13:tron_us_go_btfs_common/vendor/github.com/tron-us/go-btfs-common \
		tron-us:go-common:v2.3.0:tron_us_go_common_v2/vendor/github.com/tron-us/go-common/v2 \
		tron-us:protobuf:v1.3.7:tron_us_protobuf/vendor/github.com/tron-us/protobuf \
		tyler-smith:go-bip32:2c9cfd177564:tyler_smith_go_bip32/vendor/github.com/tyler-smith/go-bip32 \
		tyler-smith:go-bip39:v1.0.2:tyler_smith_go_bip39/vendor/github.com/tyler-smith/go-bip39 \
		uber-go:atomic:v1.6.0:uber_go_atomic/vendor/go.uber.org/atomic \
		uber-go:dig:v1.10.0:uber_go_dig/vendor/go.uber.org/dig \
		uber-go:fx:v1.13.1:uber_go_fx/vendor/go.uber.org/fx \
		uber-go:multierr:v1.5.0:uber_go_multierr/vendor/go.uber.org/multierr \
		uber-go:zap:v1.16.0:uber_go_zap/vendor/go.uber.org/zap \
		ulikunitz:xz:v0.5.6:ulikunitz_xz/vendor/github.com/ulikunitz/xz \
		vmihailenco:bufpool:v0.1.11:vmihailenco_bufpool/vendor/github.com/vmihailenco/bufpool \
		vmihailenco:msgpack:v4.3.12:vmihailenco_msgpack_v4/vendor/github.com/vmihailenco/msgpack/v4 \
		vmihailenco:tagparser:v0.1.1:vmihailenco_tagparser/vendor/github.com/vmihailenco/tagparser \
		whyrusleeping:base32:c30ac30633cc:whyrusleeping_base32/vendor/github.com/whyrusleeping/base32 \
		whyrusleeping:cbor-gen:5379fc63235d:whyrusleeping_cbor_gen/vendor/github.com/whyrusleeping/cbor-gen \
		whyrusleeping:chunker:fe64bd25879f:whyrusleeping_chunker/vendor/github.com/whyrusleeping/chunker \
		whyrusleeping:go-keyspace:5b898ac5add1:whyrusleeping_go_keyspace/vendor/github.com/whyrusleeping/go-keyspace \
		whyrusleeping:go-sysinfo:4a357d4b90b1:whyrusleeping_go_sysinfo/vendor/github.com/whyrusleeping/go-sysinfo \
		whyrusleeping:mdns:b9b60ed33aa9:whyrusleeping_mdns/vendor/github.com/whyrusleeping/mdns \
		whyrusleeping:multiaddr-filter:e903e4adabd7:whyrusleeping_multiaddr_filter/vendor/github.com/whyrusleeping/multiaddr-filter \
		whyrusleeping:tar-utils:8c6c8ba81d5c:whyrusleeping_tar_utils/vendor/github.com/whyrusleeping/tar-utils \
		whyrusleeping:timecache:cfcb2f1abfee:whyrusleeping_timecache/vendor/github.com/whyrusleeping/timecache \
		xi2:xz:48954b6210f8:xi2_xz/vendor/github.com/xi2/xz

GO_TARGET=	./cmd/btfs

PLIST_FILES=	bin/btfs

.include <bsd.port.mk>

# Created by: Matthias Andree <mandree@FreeBSD.org>

PKGNAMESUFFIX=		-gtk2

DEPRECATED=		putty-gtk2 is being phased out
EXPIRATION_DATE=	2021-12-15

OPTIONS_SLAVE=		GTK2
OPTIONS_EXCLUDE=	GTK3

CONFLICTS_INSTALL=	pssh putty putty-nogtk

MASTERDIR=		${.CURDIR}/../../security/putty

.include "${MASTERDIR}/Makefile"

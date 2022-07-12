// Required and extra capabilities for iPXE that are not on by default

#define DIGEST_CMD
#define NET_PROTO_IPV4
#define NET_PROTO_IPV6
#define DOWNLOAD_PROTO_HTTP
#define DOWNLOAD_PROTO_HTTPS
#define IMAGE_TRUST_CMD
#define NSLOOKUP_CMD
#define PING_CMD
#define REBOOT_CMD
#define NTP_CMD
#define PCI_CMD
#define TIME_CMD
#define VLAN_CMD
#define CERT_CMD

#define AUTOBOOT_DISABLE_ANSI 1

// Disable OCSP_CHECK for Let's encrypt (from alpine-ipxe)

#undef OCSP_CHECK

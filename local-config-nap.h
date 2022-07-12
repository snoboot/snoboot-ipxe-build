#cat src/config/local/nap.h 
// prevent hang after u-boot
// https://github.com/ipxe/ipxe/discussions/605#discussioncomment-2273515
#undef NAP_EFIARM
#define NAP_NULL

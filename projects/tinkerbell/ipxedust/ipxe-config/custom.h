/* Custom iPXE configuration for EKS Anywhere bare metal provisioning */

/* Enhanced timeout configuration */
#define LINK_WAIT_MS 15000    /* Increased from default 5000ms for better stability with slower network interfaces */

/* Network protocol support */
#define NET_PROTO_IPV4        /* Enable IPv4 protocol support */

/* Download protocol support */
#define DOWNLOAD_PROTO_TFTP   /* Enable TFTP (Trivial File Transfer Protocol) for downloading files */
#define DOWNLOAD_PROTO_HTTP   /* Enable HTTP protocol for downloading files */

/* Image format support */
#define IMAGE_EFI             /* Enable support for EFI (Extensible Firmware Interface) images */

/* Console support */
#define CONSOLE_EFI           /* Enable console output to EFI console */
#define CONSOLE_SERIAL        /* Enable console output to serial port */

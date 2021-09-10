/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if you have buggy CMSG macros */
/* #undef BUGGY_CMSG_MACROS */

/* Built-in Cassandra support */
/* #undef BUILD_CASSANDRA */

/* Build with CDB support */
/* #undef BUILD_CDB */

/* Build with Berkeley DB support */
/* #undef BUILD_DB */

/* Built-in MySQL support */
/* #undef BUILD_MYSQL */

/* Built-in PostgreSQL support */
/* #undef BUILD_PGSQL */

/* Built-in SQLite support */
/* #undef BUILD_SQLITE */

/* GSSAPI support is built in */
/* #undef BUILTIN_GSSAPI */

/* LDAP support is built in */
/* #undef BUILTIN_LDAP */

/* Lua support is builtin */
/* #undef BUILTIN_LUA */

/* IMAP capabilities advertised in banner */
#define CAPABILITY_BANNER_STRING "IMAP4rev1 SASL-IR LOGIN-REFERRALS ID ENABLE IDLE"

/* IMAP capabilities */
#define CAPABILITY_STRING "IMAP4rev1 SASL-IR LOGIN-REFERRALS ID ENABLE IDLE SORT SORT=DISPLAY THREAD=REFERENCES THREAD=REFS THREAD=ORDEREDSUBJECT MULTIAPPEND URL-PARTIAL CATENATE UNSELECT CHILDREN NAMESPACE UIDPLUS LIST-EXTENDED I18NLEVEL=1 CONDSTORE QRESYNC ESEARCH ESORT SEARCHRES WITHIN CONTEXT=SEARCH LIST-STATUS BINARY MOVE SNIPPET=FUZZY PREVIEW=FUZZY PREVIEW STATUS=SIZE SAVEDATE"

/* Define if _XPG6 macro is needed for crypt() */
#define CRYPT_USE_XPG6 /**/

/* Build with extra debugging checks */
/* #undef DEBUG */

/* Define if your dev_t is a structure instead of integer type */
/* #undef DEV_T_STRUCT */

/* Path to random source */
#define DEV_URANDOM_PATH "/dev/urandom"

/* Disable asserts */
/* #undef DISABLE_ASSERTS */

/* Lua scripts will be able to yield */
/* #undef DLUA_WITH_YIELDS */

/* Dovecot ABI version */
#define DOVECOT_ABI_VERSION "2.3.ABIv16(2.3.16)"

/* Dovecot name */
#define DOVECOT_NAME "Dovecot"

/* Dovecot string */
#define DOVECOT_STRING "Dovecot 2.3.16"

/* Dovecot version */
#define DOVECOT_VERSION "2.3.16"

/* Dovecot major version */
#define DOVECOT_VERSION_MAJOR 2

/* Dovecot minor version */
#define DOVECOT_VERSION_MINOR 3

/* How to define flexible array members in structs */
#define FLEXIBLE_ARRAY_MEMBER 

/* Define this if you have arc4random_buf() */
/* #undef HAVE_ARC4RANDOM */

/* Build with ASN1_STRING_get0_data() support */
/* #undef HAVE_ASN1_STRING_GET0_DATA */

/* Define to 1 if you have the `backtrace_symbols' function. */
#define HAVE_BACKTRACE_SYMBOLS 1

/* Build with BN_secure_new support */
/* #undef HAVE_BN_SECURE_NEW */

/* Define if you have bzlib library */
/* #undef HAVE_BZLIB */

/* Build with Cassandra support */
/* #undef HAVE_CASSANDRA */

/* Cassandra supports speculative execution policy */
/* #undef HAVE_CASSANDRA_SPECULATIVE_POLICY */

/* Build with cass_cluster_set_use_hostname_resolution() support */
/* #undef HAVE_CASS_CLUSTER_SET_USE_HOSTNAME_RESOLUTION */

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* Define if you have the clock_gettime function */
#define HAVE_CLOCK_GETTIME /**/

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Define to 1 if you have the declaration of
   `CASS_SSL_VERIFY_PEER_IDENTITY_DNS', and to 0 if you don't. */
/* #undef HAVE_DECL_CASS_SSL_VERIFY_PEER_IDENTITY_DNS */

/* Define to 1 if you have the declaration of `getrandom', and to 0 if you
   don't. */
#define HAVE_DECL_GETRANDOM 1

/* Define to 1 if you have the declaration of
   `ZSTD_error_parameter_unsupported', and to 0 if you don't. */
/* #undef HAVE_DECL_ZSTD_ERROR_PARAMETER_UNSUPPORTED */

/* Define to 1 if you have the declaration of `ZSTD_minCLevel', and to 0 if
   you don't. */
/* #undef HAVE_DECL_ZSTD_MINCLEVEL */

/* Define if you have struct dirent->d_type */
#define HAVE_DIRENT_D_TYPE /**/

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Build with ECDSA_SIG_get0 support */
/* #undef HAVE_ECDSA_SIG_GET0 */

/* Build with ECDSA_SIG_set0 support */
/* #undef HAVE_ECDSA_SIG_SET0 */

/* Build with EC_GROUP_order_bits support */
/* #undef HAVE_EC_GROUP_order_bits */

/* Build with EVP_MD_CTX_new() support */
/* #undef HAVE_EVP_MD_CTX_NEW */

/* Build with EVP_PKEY_get0_*() support */
/* #undef HAVE_EVP_PKEY_get0 */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `fallocate' function. */
#define HAVE_FALLOCATE 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define if you have fdatasync() */
#define HAVE_FDATASYNC /**/

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define if your compiler has -fno-sanitize=nonnull-attribute */
/* #undef HAVE_FNO_SANITIZE_NONNULL_ATTRIBUTE */

/* Define if you have FreeBSD-compatible sendfile() */
/* #undef HAVE_FREEBSD_SENDFILE */

/* Define if your compiler has -fsanitize=implicit-integer-truncation */
/* #undef HAVE_FSANITIZE_IMPLICIT_INTEGER_TRUNCATION */

/* Define if your compiler has -fsanitize=integer */
/* #undef HAVE_FSANITIZE_INTEGER */

/* Define if your compiler has -fsanitize=local-bounds */
/* #undef HAVE_FSANITIZE_LOCAL_BOUNDS */

/* Define if your compiler has -fsanitize=nullability */
/* #undef HAVE_FSANITIZE_NULLABILITY */

/* Define if your compiler has -fsanitize=undefined */
/* #undef HAVE_FSANITIZE_UNDEFINED */

/* Define if you want exttextcat support for FTS */
/* #undef HAVE_FTS_EXTTEXTCAT */

/* Define if you want stemming support for FTS */
/* #undef HAVE_FTS_STEMMER */

/* Define if you want textcat support for FTS */
/* #undef HAVE_FTS_TEXTCAT */

/* Define to 1 if you have the `getmntent' function. */
#define HAVE_GETMNTENT 1

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getpeerucred' function. */
/* #undef HAVE_GETPEERUCRED */

/* Define to 1 if you have the `getrandom' function. */
#define HAVE_GETRANDOM 1

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Build with GNUTLS support */
/* #undef HAVE_GNUTLS */

/* Build with GSSAPI support */
/* #undef HAVE_GSSAPI */

/* Define to 1 if you have the <gssapi/gssapi_ext.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_EXT_H */

/* GSSAPI headers in gssapi/gssapi.h */
/* #undef HAVE_GSSAPI_GSSAPI_H */

/* Define to 1 if you have the <gssapi/gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_KRB5_H */

/* GSSAPI headers in gssapi.h */
/* #undef HAVE_GSSAPI_H */

/* Define to 1 if you have the <gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_KRB5_H */

/* GSSAPI supports SPNEGO */
/* #undef HAVE_GSSAPI_SPNEGO */

/* Define to 1 if you have the `gsskrb5_register_acceptor_identity' function.
   */
/* #undef HAVE_GSSKRB5_REGISTER_ACCEPTOR_IDENTITY */

/* Build with HMAC_CTX_new() support */
/* #undef HAVE_HMAC_CTX_NEW */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inotify_init' function. */
#define HAVE_INOTIFY_INIT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Build with IPv6 support */
#define HAVE_IPV6 /**/

/* Define to 1 if you have the <jfs/quota.h> header file. */
/* #undef HAVE_JFS_QUOTA_H */

/* Define to 1 if you have the `kevent' function. */
/* #undef HAVE_KEVENT */

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `krb5_free_context' function. */
/* #undef HAVE_KRB5_FREE_CONTEXT */

/* Define to 1 if you have the `krb5_gss_register_acceptor_identity' function.
   */
/* #undef HAVE_KRB5_GSS_REGISTER_ACCEPTOR_IDENTITY */

/* Define this if you have libbsd */
/* #undef HAVE_LIBBSD */

/* libcap is installed for cap_init() */
/* #undef HAVE_LIBCAP */

/* Define to 1 if you have the <libexttextcat/textcat.h> header file. */
/* #undef HAVE_LIBEXTTEXTCAT_TEXTCAT_H */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define if you want ICU normalization support for FTS */
/* #undef HAVE_LIBICU */

/* Define if you have libsodium */
/* #undef HAVE_LIBSODIUM */

/* Define to 1 if you have libsystemd */
/* #undef HAVE_LIBSYSTEMD */

/* Define to 1 if you have the <libtextcat/textcat.h> header file. */
/* #undef HAVE_LIBTEXTCAT_TEXTCAT_H */

/* Define this if you have libunwind */
/* #undef HAVE_LIBUNWIND */

/* Define if you have libwrap */
/* #undef HAVE_LIBWRAP */

/* Define to 1 if you have the <linux/dqblk_xfs.h> header file. */
#define HAVE_LINUX_DQBLK_XFS_H 1

/* Define to 1 if you have the <linux/falloc.h> header file. */
#define HAVE_LINUX_FALLOC_H 1

/* Define if you have Linux-compatible mremap() */
#define HAVE_LINUX_MREMAP /**/

/* Define if you have Linux-compatible sendfile() */
#define HAVE_LINUX_SENDFILE /**/

/* Define to 1 if you have the `lockf' function. */
#define HAVE_LOCKF 1

/* Define to 1 if you have lua */
/* #undef HAVE_LUA */

/* Define to 1 if you have the `luaL_setfuncs' function. */
/* #undef HAVE_LUAL_SETFUNCS */

/* Define to 1 if you have the `luaL_setmetatable' function. */
/* #undef HAVE_LUAL_SETMETATABLE */

/* Define to 1 if you have the `lua_isinteger' function. */
/* #undef HAVE_LUA_ISINTEGER */

/* Define to 1 if you have the `lua_resume' function. */
/* #undef HAVE_LUA_RESUME */

/* Define to 1 if you have the `lua_seti' function. */
/* #undef HAVE_LUA_SETI */

/* Define to 1 if you have the `lua_tointegerx' function. */
/* #undef HAVE_LUA_TOINTEGERX */

/* Define to 1 if you have the `lua_yieldk' function. */
/* #undef HAVE_LUA_YIELDK */

/* Define if you have lz4 library */
/* #undef HAVE_LZ4 */

/* Define if you have LZ4_compress_default */
/* #undef HAVE_LZ4_COMPRESS_DEFAULT */

/* Define if you have lzma library */
/* #undef HAVE_LZMA */

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <malloc_np.h> header file. */
/* #undef HAVE_MALLOC_NP_H */

/* Define to 1 if you have the `malloc_usable_size' function. */
#define HAVE_MALLOC_USABLE_SIZE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define if you have dynamic module support */
#define HAVE_MODULES /**/

/* Build with MySQL support */
/* #undef HAVE_MYSQL */

/* Define if your MySQL library has SSL functions */
/* #undef HAVE_MYSQL_SSL */

/* Define if your MySQL library supports setting cipher */
/* #undef HAVE_MYSQL_SSL_CIPHER */

/* Defineif your MySQL library supports verifying the name in the SSL
   certificate */
/* #undef HAVE_MYSQL_SSL_VERIFY_SERVER_CERT */

/* Build with OBJ_length() support */
/* #undef HAVE_OBJ_LENGTH */

/* Define if you don't have C99 compatible vsnprintf() call */
/* #undef HAVE_OLD_VSNPRINTF */

/* Build with OpenSSL support */
/* #undef HAVE_OPENSSL */

/* Define if OpenSSL performs thread cleanup automatically */
/* #undef HAVE_OPENSSL_AUTO_THREAD_DEINIT */

/* OpenSSL supports OPENSSL_cleanup() */
/* #undef HAVE_OPENSSL_CLEANUP */

/* Define to 1 if you have the <openssl/err.h> header file. */
/* #undef HAVE_OPENSSL_ERR_H */

/* Define if you have ERR_remove_thread_state */
/* #undef HAVE_OPENSSL_ERR_REMOVE_THREAD_STATE */

/* Define if you have openssl/rand.h */
/* #undef HAVE_OPENSSL_RAND_H */

/* Define to 1 if you have the <openssl/ssl.h> header file. */
/* #undef HAVE_OPENSSL_SSL_H */

/* Define if you have pam/pam_appl.h */
/* #undef HAVE_PAM_PAM_APPL_H */

/* Define if you have pam_setcred() */
/* #undef HAVE_PAM_SETCRED */

/* Build with PostgreSQL support */
/* #undef HAVE_PGSQL */

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define if you have a working posix_fallocate() */
#define HAVE_POSIX_FALLOCATE /**/

/* Define if libpq has PQescapeStringConn function */
/* #undef HAVE_PQESCAPE_STRING_CONN */

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define if you have prctl(PR_SET_DUMPABLE) */
#define HAVE_PR_SET_DUMPABLE /**/

/* Define to 1 if you have the `quotactl' function. */
#define HAVE_QUOTACTL 1

/* Define to 1 if you have the <quota.h> header file. */
/* #undef HAVE_QUOTA_H */

/* Define if you have quota_open() */
/* #undef HAVE_QUOTA_OPEN */

/* Define if Q_QUOTACTL exists */
/* #undef HAVE_Q_QUOTACTL */

/* Define if you have RLIMIT_AS for setrlimit() */
#define HAVE_RLIMIT_AS /**/

/* Define if you have RLIMIT_CORE for getrlimit() */
#define HAVE_RLIMIT_CORE /**/

/* Define if you have RLIMIT_NPROC for setrlimit() */
#define HAVE_RLIMIT_NPROC /**/

/* Define if you wish to retrieve quota of NFS mounted mailboxes */
#define HAVE_RQUOTA /**/

/* Build with RSA_generate_key_ex() support */
/* #undef HAVE_RSA_GENERATE_KEY_EX */

/* Build with RSA_set0_crt_params support */
/* #undef HAVE_RSA_SET0_CRT_PARAMS */

/* Build with RSA_set0_factors support */
/* #undef HAVE_RSA_SET0_FACTORS */

/* Build with RSA_set0_key support */
/* #undef HAVE_RSA_SET0_KEY */

/* Define to 1 if you have the <sasl.h> header file. */
/* #undef HAVE_SASL_H */

/* Define to 1 if you have the <sasl/sasl.h> header file. */
/* #undef HAVE_SASL_SASL_H */

/* Define if you have security/pam_appl.h */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setproctitle' function. */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setreuid' function. */
#define HAVE_SETREUID 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 'int' if you don't have socklen_t */
#define HAVE_SOCKLEN_T /**/

/* Define if you have Solaris-compatible sendfile() */
/* #undef HAVE_SOLARIS_SENDFILE */

/* Build with SQLite3 support */
/* #undef HAVE_SQLITE */

/* Build with SSL/TLS support */
/* #undef HAVE_SSL */

/* Define if you have SSL_CIPHER_get_kx_nid */
/* #undef HAVE_SSL_CIPHER_get_kx_nid */

/* Define if you have SSL_clear_options */
/* #undef HAVE_SSL_CLEAR_OPTIONS */

/* Build with OpenSSL compression */
/* #undef HAVE_SSL_COMPRESSION */

/* Build with SSL_COMP_free_compression_methods() support */
/* #undef HAVE_SSL_COMP_FREE_COMPRESSION_METHODS */

/* Define if you have SSL_CTX_add0_chain_cert */
/* #undef HAVE_SSL_CTX_ADD0_CHAIN_CERT */

/* Define if you have SSL_CTX_set1_curves_list */
/* #undef HAVE_SSL_CTX_SET1_CURVES_LIST */

/* Build with SSL_CTX_set_ciphersuites() support */
/* #undef HAVE_SSL_CTX_SET_CIPHERSUITES */

/* Define if you have SSL_CTX_set_current_cert */
/* #undef HAVE_SSL_CTX_SET_CURRENT_CERT */

/* Define if you have SSL_CTX_set_min_proto_version */
/* #undef HAVE_SSL_CTX_SET_MIN_PROTO_VERSION */

/* Build with TLS hostname support */
/* #undef HAVE_SSL_GET_SERVERNAME */

/* Define if CRYPTO_set_mem_functions has new style parameters */
/* #undef HAVE_SSL_NEW_MEM_FUNCS */

/* Define if you have statfs.f_mntfromname */
/* #undef HAVE_STATFS_MNTFROMNAME */

/* Define if you have statvfs.f_mntfromname */
/* #undef HAVE_STATVFS_MNTFROMNAME */

/* Define if you have st_?tim timespec fields in struct stat */
#define HAVE_STAT_XTIM /**/

/* Define if you have st_?timespec fields in struct stat */
/* #undef HAVE_STAT_XTIMESPEC */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `stricmp' function. */
/* #undef HAVE_STRICMP */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if struct sqblk.dqb_curblocks exists */
/* #undef HAVE_STRUCT_DQBLK_CURBLOCKS */

/* Define if struct sqblk.dqb_curspace exists */
#define HAVE_STRUCT_DQBLK_CURSPACE /**/

/* Define if you have struct iovec */
#define HAVE_STRUCT_IOVEC /**/

/* Define to 1 if the system has the type `struct sockpeercred'. */
/* #undef HAVE_STRUCT_SOCKPEERCRED */

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/fs/quota_common.h> header file. */
/* #undef HAVE_SYS_FS_QUOTA_COMMON_H */

/* Define to 1 if you have the <sys/fs/ufs_quota.h> header file. */
/* #undef HAVE_SYS_FS_UFS_QUOTA_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/quota.h> header file. */
#define HAVE_SYS_QUOTA_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucred.h> header file. */
/* #undef HAVE_SYS_UCRED_H */

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vmount.h> header file. */
/* #undef HAVE_SYS_VMOUNT_H */

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define if you have struct tm->tm_gmtoff */
#define HAVE_TM_GMTOFF /**/

/* Define if you have typeof() */
#define HAVE_TYPEOF /**/

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* Define to 1 if you have the <ucred.h> header file. */
/* #undef HAVE_UCRED_H */

/* Define to 1 if you have the <ufs/ufs/quota.h> header file. */
/* #undef HAVE_UFS_UFS_QUOTA_H */

/* Define if you have uintmax_t (C99 type) */
#define HAVE_UINTMAX_T /**/

/* Define if you have uint_fast32_t (C99 type) */
#define HAVE_UINT_FAST32_T /**/

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define if your compiler supports undefined sanitizers */
/* #undef HAVE_UNDEFINED_SANITIZER */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if you have a native uoff_t type */
/* #undef HAVE_UOFF_T */

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG 1

/* Define to 1 if you have the `walkcontext' function. */
/* #undef HAVE_WALKCONTEXT */

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* OpenSSL supports X509_check_host() */
/* #undef HAVE_X509_CHECK_HOST */

/* OpenSSL supports X509_check_ip() */
/* #undef HAVE_X509_CHECK_IP */

/* OpenSSL supports X509_check_ip_asc() */
/* #undef HAVE_X509_CHECK_IP_ASC */

/* Define to 1 if you have the <xfs/xqm.h> header file. */
/* #undef HAVE_XFS_XQM_H */

/* Define if you have zlib library */
/* #undef HAVE_ZLIB */

/* Define if you have ZSTD library */
/* #undef HAVE_ZSTD */

/* Whether zstd has ZSTD_getErrorCode */
/* #undef HAVE_ZSTD_GETERRORCODE */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define if you have __gss_userok() */
/* #undef HAVE___GSS_USEROK */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Implement I/O loop with Linux 2.6 epoll() */
#define IOLOOP_EPOLL /**/

/* Implement I/O loop with BSD kqueue() */
/* #undef IOLOOP_KQUEUE */

/* Use Linux inotify */
#define IOLOOP_NOTIFY_INOTIFY /**/

/* Use BSD kqueue directory changes notification */
/* #undef IOLOOP_NOTIFY_KQUEUE */

/* No special notify support */
/* #undef IOLOOP_NOTIFY_NONE */

/* Implement I/O loop with poll() */
/* #undef IOLOOP_POLL */

/* Implement I/O loop with select() */
/* #undef IOLOOP_SELECT */

/* Define if you have ldap_initialize */
/* #undef LDAP_HAVE_INITIALIZE */

/* Define if you have ldap_start_tls_s */
/* #undef LDAP_HAVE_START_TLS_S */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Required memory alignment */
#define MEM_ALIGN_SIZE 8

/* Define if shared mmaps don't get updated by write()s */
/* #undef MMAP_CONFLICTS_WRITE */

/* Dynamic module suffix */
#define MODULE_SUFFIX ".so"

/* Maximum value of off_t */
#define OFF_T_MAX LONG_MAX

/* Name of package */
#define PACKAGE "dovecot"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "dovecot@dovecot.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Dovecot"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Dovecot 2.3.16"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dovecot"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.3.16"

/* Support URL */
#define PACKAGE_WEBPAGE "http://www.dovecot.org/"

/* Build with BSD authentication support */
/* #undef PASSDB_BSDAUTH */

/* Build with checkpassword passdb support */
#define PASSDB_CHECKPASSWORD /**/

/* Build with LDAP support */
/* #undef PASSDB_LDAP */

/* Build with PAM support */
/* #undef PASSDB_PAM */

/* Build with passwd support */
#define PASSDB_PASSWD /**/

/* Build with passwd-file support */
#define PASSDB_PASSWD_FILE /**/

/* Build with shadow support */
#define PASSDB_SHADOW /**/

/* Build with SQL support */
/* #undef PASSDB_SQL */

/* Define if pread/pwrite implementation is broken */
/* #undef PREAD_BROKEN */

/* Define if pread/pwrite needs _XOPEN_SOURCE 500 */
#define PREAD_WRAPPERS /**/

/* printf() fmt for dec time_t */
#define PRIdTIME_T "ld"

/* printf() format for uoff_t */
#define PRIuUOFF_T "lu"

/* printf() fmt for hex time_t */
#define PRIxTIME_T "lx"

/* Define if process title can be changed by modifying argv */
#define PROCTITLE_HACK /**/

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Build SQL drivers as plugins */
/* #undef SQL_DRIVER_PLUGINS */

/* Maximum value of ssize_t */
#define SSIZE_T_MAX LONG_MAX

/* C99 static array */
#define STATIC_ARRAY static

/* Building with static code analyzer */
/* #undef STATIC_CHECKER */

/* reasonable mntctl buffer size */
/* #undef STATIC_MTAB_SIZE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Points to textcat pkgdatadir containing the language files */
/* #undef TEXTCAT_DATADIR */

/* max. time_t bits gmtime() can handle */
#define TIME_T_MAX_BITS 40

/* Define if your time_t is signed */
#define TIME_T_SIGNED /**/

/* Define if off_t is int */
/* #undef UOFF_T_INT */

/* Define if off_t is long */
#define UOFF_T_LONG /**/

/* Define if off_t is long long */
/* #undef UOFF_T_LONG_LONG */

/* Maximum value of uoff_t */
#define UOFF_T_MAX ULONG_MAX

/* Build with checkpassword userdb support */
#define USERDB_CHECKPASSWORD /**/

/* Build with LDAP support */
/* #undef USERDB_LDAP */

/* Build with passwd support */
#define USERDB_PASSWD /**/

/* Build with passwd-file support */
#define USERDB_PASSWD_FILE /**/

/* Build with prefetch userdb support */
#define USERDB_PREFETCH /**/

/* Build with SQL support */
/* #undef USERDB_SQL */

/* A 'va_copy' style function */
#define VA_COPY va_copy

/* 'va_lists' cannot be copied as values */
#define VA_COPY_AS_ARRAY 1

/* Version number of package */
#define VERSION "2.3.16"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to 'unsigned int' if you don't have it */
/* #undef size_t */

/* Define to 'int' if you don't have it */
/* #undef ssize_t */

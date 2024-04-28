# 0 "Hacl_HMAC.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "Hacl_HMAC.c"
# 26 "Hacl_HMAC.c"
# 1 "../include/internal/Hacl_HMAC.h" 1
# 33 "../include/internal/Hacl_HMAC.h"
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 490 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 561 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 562 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 563 "/usr/include/sys/cdefs.h" 2 3 4
# 491 "/usr/include/features.h" 2 3 4
# 514 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 515 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/string.h" 2 3 4



#include "cfgboost.h"


# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4

# 214 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/bits/types/locale_t.h" 3 4
# 1 "/usr/include/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 293 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 407 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 539 "/usr/include/string.h" 3 4

# 34 "../include/internal/Hacl_HMAC.h" 2
# 1 "../karamel/include/krml/internal/types.h" 1






# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


# 8 "../karamel/include/krml/internal/types.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 178 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);
# 188 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 205 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 258 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 293 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 308 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 328 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 403 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/bits/floatn.h" 1 3 4
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 431 "/usr/include/stdio.h" 2 3 4



extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 513 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 538 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 549 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 565 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2)));
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 736 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 760 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 786 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 867 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 909 "/usr/include/stdio.h" 3 4

# 9 "../karamel/include/krml/internal/types.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 329 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 59 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 144 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 35 "/usr/include/bits/endian.h" 3 4
# 1 "/usr/include/bits/endianness.h" 1 3 4
# 36 "/usr/include/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 33 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4

# 102 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 153 "/usr/include/sys/select.h" 3 4

# 180 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4



# 396 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern __uint32_t arc4random (void)
     __attribute__ ((__nothrow__ , __leaf__)) ;


extern void arc4random_buf (void *__buf, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     __attribute__ ((__nothrow__ , __leaf__)) ;




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 588 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 667 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 695 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 708 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 730 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 751 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 804 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 821 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 841 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 861 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 893 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 980 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1026 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1036 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 1037 "/usr/include/stdlib.h" 2 3 4
# 1048 "/usr/include/stdlib.h" 3 4

# 10 "../karamel/include/krml/internal/types.h" 2







# 16 "../karamel/include/krml/internal/types.h"
typedef uint64_t FStar_UInt64_t, FStar_UInt64_t_;
typedef int64_t FStar_Int64_t, FStar_Int64_t_;
typedef uint32_t FStar_UInt32_t, FStar_UInt32_t_;
typedef int32_t FStar_Int32_t, FStar_Int32_t_;
typedef uint16_t FStar_UInt16_t, FStar_UInt16_t_;
typedef int16_t FStar_Int16_t, FStar_Int16_t_;
typedef uint8_t FStar_UInt8_t, FStar_UInt8_t_;
typedef int8_t FStar_Int8_t, FStar_Int8_t_;



typedef uint64_t FStar_UInt63_t, FStar_UInt63_t_;
typedef int64_t FStar_Int63_t, FStar_Int63_t_;

typedef double FStar_Float_float;
typedef uint32_t FStar_Char_char;
typedef FILE *FStar_IO_fd_read, *FStar_IO_fd_write;

typedef void *FStar_Dyn_dyn;

typedef const char *C_String_t, *C_String_t_, *C_Compat_String_t, *C_Compat_String_t_;

typedef int exit_code;
typedef FILE *channel;

typedef unsigned long long TestLib_cycles;

typedef uint64_t FStar_Date_dateTime, FStar_Date_timeSpan;




typedef const char *Prims_string;
# 76 "../karamel/include/krml/internal/types.h"
typedef unsigned __int128 FStar_UInt128_uint128;
# 86 "../karamel/include/krml/internal/types.h"
typedef FStar_UInt128_uint128 FStar_UInt128_t, uint128_t;

# 1 "../karamel/include/krml/lowstar_endianness.h" 1
# 160 "../karamel/include/krml/lowstar_endianness.h"
inline static uint16_t load16(uint8_t *b) {
  uint16_t x;
  memcpy(&x, b, 2);
  return x;
}

inline static uint32_t load32(uint8_t *b) {
  uint32_t x;
  memcpy(&x, b, 4);
  return x;
}

inline static uint64_t load64(uint8_t *b) {
  uint64_t x;
  memcpy(&x, b, 8);
  return x;
}

inline static void store16(uint8_t *b, uint16_t i) {
  memcpy(b, &i, 2);
}

inline static void store32(uint8_t *b, uint32_t i) {
  memcpy(b, &i, 4);
}

inline static void store64(uint8_t *b, uint64_t i) {
  memcpy(b, &i, 8);
}
# 89 "../karamel/include/krml/internal/types.h" 2
# 99 "../karamel/include/krml/internal/types.h"
# 1 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 1
# 26 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
# 1 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 1
# 11 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stdbool.h" 1 3 4
# 12 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 2
# 1 "../karamel/include/krml/internal/compat.h" 1
# 12 "../karamel/include/krml/internal/compat.h"
typedef struct {
  uint32_t length;
  const char *data;
} FStar_Bytes_bytes;

typedef int32_t Prims_pos, Prims_nat, Prims_nonzero, Prims_int,
    krml_checked_int_t;
# 13 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 2

# 1 "../karamel/include/krml/internal/types.h" 1
# 99 "../karamel/include/krml/internal/types.h"
# 1 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 1
# 100 "../karamel/include/krml/internal/types.h" 2
# 15 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 2
# 1 "../karamel/include/krml/internal/target.h" 1






# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4




# 67 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 8 "../karamel/include/krml/internal/target.h" 2

# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 1 3 4
# 203 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 195 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 81 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/bits/pthread_stack_min-dynamic.h" 1 3 4
# 29 "/usr/include/bits/pthread_stack_min-dynamic.h" 3 4
# 1 "/usr/include/bits/pthread_stack_min.h" 1 3 4
# 30 "/usr/include/bits/pthread_stack_min-dynamic.h" 2 3 4
# 82 "/usr/include/bits/local_lim.h" 2 3 4
# 162 "/usr/include/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4
# 204 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-redhat-linux/12/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-redhat-linux/12/include/limits.h" 2 3 4
# 10 "../karamel/include/krml/internal/target.h" 2

# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 424 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 435 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 3 4
} max_align_t;
# 12 "../karamel/include/krml/internal/target.h" 2
# 136 "../karamel/include/krml/internal/target.h"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/12/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));



extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/time.h" 3 4
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 116 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 132 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 154 "/usr/include/time.h" 3 4
extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 179 "/usr/include/time.h" 3 4
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 197 "/usr/include/time.h" 3 4
extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
# 217 "/usr/include/time.h" 3 4
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 246 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 263 "/usr/include/time.h" 3 4
extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));







extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 281 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);


extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 323 "/usr/include/time.h" 3 4
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);
# 338 "/usr/include/time.h" 3 4
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));



extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));
# 376 "/usr/include/time.h" 3 4
extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));






extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 452 "/usr/include/time.h" 3 4

# 137 "../karamel/include/krml/internal/target.h" 2



# 139 "../karamel/include/krml/internal/target.h"
__inline__ static int32_t krml_time(void) {
  return (int32_t)time(
# 140 "../karamel/include/krml/internal/target.h" 3 4
                      ((void *)0)
# 140 "../karamel/include/krml/internal/target.h"
                          );
}
# 16 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 2

static __inline__ FStar_UInt128_uint128
FStar_UInt128_add(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_add_underspec(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_add_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_sub(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_sub_underspec(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_sub_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_logand(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_logxor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_logor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_lognot(FStar_UInt128_uint128 a);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_shift_left(FStar_UInt128_uint128 a, uint32_t s);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_shift_right(FStar_UInt128_uint128 a, uint32_t s);

static __inline__ 
# 52 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 3 4
             _Bool 
# 52 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
                  FStar_UInt128_eq(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ 
# 54 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 3 4
             _Bool 
# 54 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
                  FStar_UInt128_gt(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ 
# 56 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 3 4
             _Bool 
# 56 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
                  FStar_UInt128_lt(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ 
# 58 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 3 4
             _Bool 
# 58 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
                  FStar_UInt128_gte(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ 
# 60 "../karamel/krmllib/dist/minimal/FStar_UInt128.h" 3 4
             _Bool 
# 60 "../karamel/krmllib/dist/minimal/FStar_UInt128.h"
                  FStar_UInt128_lte(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_eq_mask(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_gte_mask(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_uint64_to_uint128(uint64_t a);

static __inline__ uint64_t FStar_UInt128_uint128_to_uint64(FStar_UInt128_uint128 a);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_mul32(uint64_t x, uint32_t y);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_mul_wide(uint64_t x, uint64_t y);
# 27 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 2
# 1 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 1
# 14 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 15 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 2


extern krml_checked_int_t FStar_UInt64_n;

extern 
# 19 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 3 4
      _Bool 
# 19 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h"
           FStar_UInt64_uu___is_Mk(uint64_t projectee);

extern krml_checked_int_t FStar_UInt64___proj__Mk__item__v(uint64_t projectee);

extern krml_checked_int_t FStar_UInt64_v(uint64_t x);

extern uint64_t FStar_UInt64_uint_to_t(krml_checked_int_t x);

extern uint64_t FStar_UInt64_zero;

extern uint64_t FStar_UInt64_one;

extern uint64_t FStar_UInt64_minus(uint64_t a);

extern uint32_t FStar_UInt64_n_minus_one;

static __attribute__((noinline,unused)) uint64_t FStar_UInt64_eq_mask(uint64_t a, uint64_t b)
{
  uint64_t x = a ^ b;
  uint64_t minus_x = ~x + 1ULL;
  uint64_t x_or_minus_x = x | minus_x;
  uint64_t xnx = x_or_minus_x >> 63U;
  return xnx - 1ULL;
}

static __attribute__((noinline,unused)) uint64_t FStar_UInt64_gte_mask(uint64_t a, uint64_t b)
{
  uint64_t x = a;
  uint64_t y = b;
  uint64_t x_xor_y = x ^ y;
  uint64_t x_sub_y = x - y;
  uint64_t x_sub_y_xor_y = x_sub_y ^ y;
  uint64_t q = x_xor_y | x_sub_y_xor_y;
  uint64_t x_xor_q = x ^ q;
  uint64_t x_xor_q_ = x_xor_q >> 63U;
  return x_xor_q_ - 1ULL;
}

extern Prims_string FStar_UInt64_to_string(uint64_t uu___);

extern Prims_string FStar_UInt64_to_string_hex(uint64_t uu___);

extern Prims_string FStar_UInt64_to_string_hex_pad(uint64_t uu___);

extern uint64_t FStar_UInt64_of_string(Prims_string uu___);

extern krml_checked_int_t FStar_UInt32_n;

extern 
# 67 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 3 4
      _Bool 
# 67 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h"
           FStar_UInt32_uu___is_Mk(uint32_t projectee);

extern krml_checked_int_t FStar_UInt32___proj__Mk__item__v(uint32_t projectee);

extern krml_checked_int_t FStar_UInt32_v(uint32_t x);

extern uint32_t FStar_UInt32_uint_to_t(krml_checked_int_t x);

extern uint32_t FStar_UInt32_zero;

extern uint32_t FStar_UInt32_one;

extern uint32_t FStar_UInt32_minus(uint32_t a);

extern uint32_t FStar_UInt32_n_minus_one;

static __attribute__((noinline,unused)) uint32_t FStar_UInt32_eq_mask(uint32_t a, uint32_t b)
{
  uint32_t x = a ^ b;
  uint32_t minus_x = ~x + 1U;
  uint32_t x_or_minus_x = x | minus_x;
  uint32_t xnx = x_or_minus_x >> 31U;
  return xnx - 1U;
}

static __attribute__((noinline,unused)) uint32_t FStar_UInt32_gte_mask(uint32_t a, uint32_t b)
{
  uint32_t x = a;
  uint32_t y = b;
  uint32_t x_xor_y = x ^ y;
  uint32_t x_sub_y = x - y;
  uint32_t x_sub_y_xor_y = x_sub_y ^ y;
  uint32_t q = x_xor_y | x_sub_y_xor_y;
  uint32_t x_xor_q = x ^ q;
  uint32_t x_xor_q_ = x_xor_q >> 31U;
  return x_xor_q_ - 1U;
}

extern Prims_string FStar_UInt32_to_string(uint32_t uu___);

extern Prims_string FStar_UInt32_to_string_hex(uint32_t uu___);

extern Prims_string FStar_UInt32_to_string_hex_pad(uint32_t uu___);

extern uint32_t FStar_UInt32_of_string(Prims_string uu___);

extern krml_checked_int_t FStar_UInt16_n;

extern 
# 115 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 3 4
      _Bool 
# 115 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h"
           FStar_UInt16_uu___is_Mk(uint16_t projectee);

extern krml_checked_int_t FStar_UInt16___proj__Mk__item__v(uint16_t projectee);

extern krml_checked_int_t FStar_UInt16_v(uint16_t x);

extern uint16_t FStar_UInt16_uint_to_t(krml_checked_int_t x);

extern uint16_t FStar_UInt16_zero;

extern uint16_t FStar_UInt16_one;

extern uint16_t FStar_UInt16_minus(uint16_t a);

extern uint32_t FStar_UInt16_n_minus_one;

static __attribute__((noinline,unused)) uint16_t FStar_UInt16_eq_mask(uint16_t a, uint16_t b)
{
  uint16_t x = (uint32_t)a ^ (uint32_t)b;
  uint16_t minus_x = (uint32_t)~x + 1U;
  uint16_t x_or_minus_x = (uint32_t)x | (uint32_t)minus_x;
  uint16_t xnx = (uint32_t)x_or_minus_x >> 15U;
  return (uint32_t)xnx - 1U;
}

static __attribute__((noinline,unused)) uint16_t FStar_UInt16_gte_mask(uint16_t a, uint16_t b)
{
  uint16_t x = a;
  uint16_t y = b;
  uint16_t x_xor_y = (uint32_t)x ^ (uint32_t)y;
  uint16_t x_sub_y = (uint32_t)x - (uint32_t)y;
  uint16_t x_sub_y_xor_y = (uint32_t)x_sub_y ^ (uint32_t)y;
  uint16_t q = (uint32_t)x_xor_y | (uint32_t)x_sub_y_xor_y;
  uint16_t x_xor_q = (uint32_t)x ^ (uint32_t)q;
  uint16_t x_xor_q_ = (uint32_t)x_xor_q >> 15U;
  return (uint32_t)x_xor_q_ - 1U;
}

extern Prims_string FStar_UInt16_to_string(uint16_t uu___);

extern Prims_string FStar_UInt16_to_string_hex(uint16_t uu___);

extern Prims_string FStar_UInt16_to_string_hex_pad(uint16_t uu___);

extern uint16_t FStar_UInt16_of_string(Prims_string uu___);

extern krml_checked_int_t FStar_UInt8_n;

extern 
# 163 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h" 3 4
      _Bool 
# 163 "../karamel/krmllib/dist/minimal/FStar_UInt_8_16_32_64.h"
           FStar_UInt8_uu___is_Mk(uint8_t projectee);

extern krml_checked_int_t FStar_UInt8___proj__Mk__item__v(uint8_t projectee);

extern krml_checked_int_t FStar_UInt8_v(uint8_t x);

extern uint8_t FStar_UInt8_uint_to_t(krml_checked_int_t x);

extern uint8_t FStar_UInt8_zero;

extern uint8_t FStar_UInt8_one;

extern uint8_t FStar_UInt8_minus(uint8_t a);

extern uint32_t FStar_UInt8_n_minus_one;

static __attribute__((noinline,unused)) uint8_t FStar_UInt8_eq_mask(uint8_t a, uint8_t b)
{
  uint8_t x = (uint32_t)a ^ (uint32_t)b;
  uint8_t minus_x = (uint32_t)~x + 1U;
  uint8_t x_or_minus_x = (uint32_t)x | (uint32_t)minus_x;
  uint8_t xnx = (uint32_t)x_or_minus_x >> 7U;
  return (uint32_t)xnx - 1U;
}

static __attribute__((noinline,unused)) uint8_t FStar_UInt8_gte_mask(uint8_t a, uint8_t b)
{
  uint8_t x = a;
  uint8_t y = b;
  uint8_t x_xor_y = (uint32_t)x ^ (uint32_t)y;
  uint8_t x_sub_y = (uint32_t)x - (uint32_t)y;
  uint8_t x_sub_y_xor_y = (uint32_t)x_sub_y ^ (uint32_t)y;
  uint8_t q = (uint32_t)x_xor_y | (uint32_t)x_sub_y_xor_y;
  uint8_t x_xor_q = (uint32_t)x ^ (uint32_t)q;
  uint8_t x_xor_q_ = (uint32_t)x_xor_q >> 7U;
  return (uint32_t)x_xor_q_ - 1U;
}

extern Prims_string FStar_UInt8_to_string(uint8_t uu___);

extern Prims_string FStar_UInt8_to_string_hex(uint8_t uu___);

extern Prims_string FStar_UInt8_to_string_hex_pad(uint8_t uu___);

extern uint8_t FStar_UInt8_of_string(Prims_string uu___);

typedef uint8_t FStar_UInt8_byte;
# 28 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 2
# 1 "../karamel/krmllib/dist/minimal/LowStar_Endianness.h" 1
# 14 "../karamel/krmllib/dist/minimal/LowStar_Endianness.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 15 "../karamel/krmllib/dist/minimal/LowStar_Endianness.h" 2


static __inline__ void store128_le(uint8_t *x0, FStar_UInt128_uint128 x1);

static __inline__ FStar_UInt128_uint128 load128_le(uint8_t *x0);

static __inline__ void store128_be(uint8_t *x0, FStar_UInt128_uint128 x1);

static __inline__ FStar_UInt128_uint128 load128_be(uint8_t *x0);
# 29 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 2



__inline__ static uint128_t load128_le(uint8_t *b) {
  uint128_t l = (uint128_t)(
# 33 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          __uint64_identity (
# 33 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          load64(b)
# 33 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          )
# 33 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          );
  uint128_t h = (uint128_t)(
# 34 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          __uint64_identity (
# 34 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          load64(b + 8)
# 34 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          )
# 34 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          );
  return (h << 64 | l);
}

__inline__ static void store128_le(uint8_t *b, uint128_t n) {
  (store64(b, 
# 39 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 __uint64_identity (
# 39 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 (uint64_t)n
# 39 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 )
# 39 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 ));
  (store64(b + 8, 
# 40 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 __uint64_identity (
# 40 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 (uint64_t)(n >> 64)
# 40 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 )
# 40 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 ));
}

__inline__ static uint128_t load128_be(uint8_t *b) {
  uint128_t h = (uint128_t)(
# 44 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          __bswap_64 (
# 44 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          load64(b)
# 44 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          )
# 44 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          );
  uint128_t l = (uint128_t)(
# 45 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          __bswap_64 (
# 45 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          load64(b + 8)
# 45 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
                          )
# 45 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                          );
  return (h << 64 | l);
}

__inline__ static void store128_be(uint8_t *b, uint128_t n) {
  (store64(b, 
# 50 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 __bswap_64 (
# 50 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 (uint64_t)(n >> 64)
# 50 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 )
# 50 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 ));
  (store64(b + 8, 
# 51 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 __bswap_64 (
# 51 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 (uint64_t)n
# 51 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
 )
# 51 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
 ));
}

__inline__ static uint128_t FStar_UInt128_add(uint128_t x, uint128_t y) {
  return x + y;
}

__inline__ static uint128_t FStar_UInt128_mul(uint128_t x, uint128_t y) {
  return x * y;
}

__inline__ static uint128_t FStar_UInt128_add_mod(uint128_t x, uint128_t y) {
  return x + y;
}

__inline__ static uint128_t FStar_UInt128_sub(uint128_t x, uint128_t y) {
  return x - y;
}

__inline__ static uint128_t FStar_UInt128_sub_mod(uint128_t x, uint128_t y) {
  return x - y;
}

__inline__ static uint128_t FStar_UInt128_logand(uint128_t x, uint128_t y) {
  return x & y;
}

__inline__ static uint128_t FStar_UInt128_logor(uint128_t x, uint128_t y) {
  return x | y;
}

__inline__ static uint128_t FStar_UInt128_logxor(uint128_t x, uint128_t y) {
  return x ^ y;
}

__inline__ static uint128_t FStar_UInt128_lognot(uint128_t x) {
  return ~x;
}

__inline__ static uint128_t FStar_UInt128_shift_left(uint128_t x, uint32_t y) {
  return x << y;
}

__inline__ static uint128_t FStar_UInt128_shift_right(uint128_t x, uint32_t y) {
  return x >> y;
}

__inline__ static uint128_t FStar_UInt128_uint64_to_uint128(uint64_t x) {
  return (uint128_t)x;
}

__inline__ static uint64_t FStar_UInt128_uint128_to_uint64(uint128_t x) {
  return (uint64_t)x;
}

__inline__ static uint128_t FStar_UInt128_mul_wide(uint64_t x, uint64_t y) {
  return ((uint128_t) x) * y;
}

__inline__ static uint128_t FStar_UInt128_eq_mask(uint128_t x, uint128_t y) {
  uint64_t mask =
      FStar_UInt64_eq_mask((uint64_t)(x >> 64), (uint64_t)(y >> 64)) &
      FStar_UInt64_eq_mask((uint64_t)x, (uint64_t)y);
  return ((uint128_t)mask) << 64 | mask;
}

__inline__ static uint128_t FStar_UInt128_gte_mask(uint128_t x, uint128_t y) {
  uint64_t mask =
      (FStar_UInt64_gte_mask(x >> 64, y >> 64) &
       ~(FStar_UInt64_eq_mask(x >> 64, y >> 64))) |
      (FStar_UInt64_eq_mask(x >> 64, y >> 64) & FStar_UInt64_gte_mask((uint64_t)x, (uint64_t)y));
  return ((uint128_t)mask) << 64 | mask;
}

__inline__ static uint64_t FStar_UInt128___proj__Mkuint128__item__low(uint128_t x) {
  return (uint64_t) x;
}

__inline__ static uint64_t FStar_UInt128___proj__Mkuint128__item__high(uint128_t x) {
  return (uint64_t) (x >> 64);
}

__inline__ static uint128_t FStar_UInt128_add_underspec(uint128_t x, uint128_t y) {
  return x + y;
}

__inline__ static uint128_t FStar_UInt128_sub_underspec(uint128_t x, uint128_t y) {
  return x - y;
}

__inline__ static 
# 141 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
             _Bool 
# 141 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                  FStar_UInt128_eq(uint128_t x, uint128_t y) {
  return x == y;
}

__inline__ static 
# 145 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
             _Bool 
# 145 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                  FStar_UInt128_gt(uint128_t x, uint128_t y) {
  return x > y;
}

__inline__ static 
# 149 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
             _Bool 
# 149 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                  FStar_UInt128_lt(uint128_t x, uint128_t y) {
  return x < y;
}

__inline__ static 
# 153 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
             _Bool 
# 153 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                  FStar_UInt128_gte(uint128_t x, uint128_t y) {
  return x >= y;
}

__inline__ static 
# 157 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h" 3 4
             _Bool 
# 157 "../karamel/krmllib/dist/minimal/fstar_uint128_gcc64.h"
                  FStar_UInt128_lte(uint128_t x, uint128_t y) {
  return x <= y;
}

__inline__ static uint128_t FStar_UInt128_mul32(uint64_t x, uint32_t y) {
  return (uint128_t) x * (uint128_t) y;
}
# 100 "../karamel/include/krml/internal/types.h" 2
# 35 "../include/internal/Hacl_HMAC.h" 2



# 1 "../include/internal/Hacl_Krmllib.h" 1
# 34 "../include/internal/Hacl_Krmllib.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Krmllib.h" 2



# 1 "../include/internal/../Hacl_Krmllib.h" 1
# 34 "../include/internal/../Hacl_Krmllib.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Krmllib.h" 2



static __attribute__((noinline,unused)) uint64_t FStar_UInt64_eq_mask(uint64_t a, uint64_t b);

static __attribute__((noinline,unused)) uint64_t FStar_UInt64_gte_mask(uint64_t a, uint64_t b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_add_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_sub_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_shift_right(FStar_UInt128_uint128 a, uint32_t s);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_uint64_to_uint128(uint64_t a);

static __inline__ uint64_t FStar_UInt128_uint128_to_uint64(FStar_UInt128_uint128 a);
# 39 "../include/internal/Hacl_Krmllib.h" 2

static __attribute__((noinline,unused)) uint32_t FStar_UInt32_eq_mask(uint32_t a, uint32_t b);

static __attribute__((noinline,unused)) uint32_t FStar_UInt32_gte_mask(uint32_t a, uint32_t b);

static __attribute__((noinline,unused)) uint8_t FStar_UInt8_eq_mask(uint8_t a, uint8_t b);

static __attribute__((noinline,unused)) uint16_t FStar_UInt16_eq_mask(uint16_t a, uint16_t b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_add(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_logor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static __inline__ FStar_UInt128_uint128
FStar_UInt128_shift_left(FStar_UInt128_uint128 a, uint32_t s);

static __inline__ FStar_UInt128_uint128 FStar_UInt128_mul_wide(uint64_t x, uint64_t y);

static __inline__ void store128_be(uint8_t *x0, FStar_UInt128_uint128 x1);

static __inline__ FStar_UInt128_uint128 load128_be(uint8_t *x0);
# 39 "../include/internal/Hacl_HMAC.h" 2
# 1 "../include/internal/Hacl_Hash_SHA2.h" 1
# 34 "../include/internal/Hacl_Hash_SHA2.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Hash_SHA2.h" 2




# 1 "../include/internal/../Hacl_Hash_SHA2.h" 1
# 34 "../include/internal/../Hacl_Hash_SHA2.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Hash_SHA2.h" 2



# 1 "../include/internal/../Hacl_Streaming_Types.h" 1
# 34 "../include/internal/../Hacl_Streaming_Types.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Streaming_Types.h" 2
# 53 "../include/internal/../Hacl_Streaming_Types.h"
typedef uint8_t Spec_Hash_Definitions_hash_alg;






typedef uint8_t Hacl_Streaming_Types_error_code;

typedef struct Hacl_Streaming_MD_state_32_s
{
  uint32_t *block_state;
  uint8_t *buf;
  uint64_t total_len;
}
Hacl_Streaming_MD_state_32;

typedef struct Hacl_Streaming_MD_state_64_s
{
  uint64_t *block_state;
  uint8_t *buf;
  uint64_t total_len;
}
Hacl_Streaming_MD_state_64;
# 39 "../include/internal/../Hacl_Hash_SHA2.h" 2
# 1 "../include/internal/../Hacl_Krmllib.h" 1
# 40 "../include/internal/../Hacl_Hash_SHA2.h" 2

typedef Hacl_Streaming_MD_state_32 Hacl_Hash_SHA2_state_t_224;

typedef Hacl_Streaming_MD_state_32 Hacl_Hash_SHA2_state_t_256;

typedef Hacl_Streaming_MD_state_64 Hacl_Hash_SHA2_state_t_384;

typedef Hacl_Streaming_MD_state_64 Hacl_Hash_SHA2_state_t_512;





Hacl_Streaming_MD_state_32 *Hacl_Hash_SHA2_malloc_256(void);







Hacl_Streaming_MD_state_32 *Hacl_Hash_SHA2_copy_256(Hacl_Streaming_MD_state_32 *state);




void Hacl_Hash_SHA2_reset_256(Hacl_Streaming_MD_state_32 *state);
# 75 "../include/internal/../Hacl_Hash_SHA2.h"
Hacl_Streaming_Types_error_code
Hacl_Hash_SHA2_update_256(
  Hacl_Streaming_MD_state_32 *state,
  uint8_t *input,
  uint32_t input_len
);







void Hacl_Hash_SHA2_digest_256(Hacl_Streaming_MD_state_32 *state, uint8_t *output);






void Hacl_Hash_SHA2_free_256(Hacl_Streaming_MD_state_32 *state);




void Hacl_Hash_SHA2_hash_256(uint8_t *output, uint8_t *input, uint32_t input_len);

Hacl_Streaming_MD_state_32 *Hacl_Hash_SHA2_malloc_224(void);

void Hacl_Hash_SHA2_reset_224(Hacl_Streaming_MD_state_32 *state);

Hacl_Streaming_Types_error_code
Hacl_Hash_SHA2_update_224(
  Hacl_Streaming_MD_state_32 *state,
  uint8_t *input,
  uint32_t input_len
);






void Hacl_Hash_SHA2_digest_224(Hacl_Streaming_MD_state_32 *state, uint8_t *output);

void Hacl_Hash_SHA2_free_224(Hacl_Streaming_MD_state_32 *state);




void Hacl_Hash_SHA2_hash_224(uint8_t *output, uint8_t *input, uint32_t input_len);

Hacl_Streaming_MD_state_64 *Hacl_Hash_SHA2_malloc_512(void);







Hacl_Streaming_MD_state_64 *Hacl_Hash_SHA2_copy_512(Hacl_Streaming_MD_state_64 *state);

void Hacl_Hash_SHA2_reset_512(Hacl_Streaming_MD_state_64 *state);
# 146 "../include/internal/../Hacl_Hash_SHA2.h"
Hacl_Streaming_Types_error_code
Hacl_Hash_SHA2_update_512(
  Hacl_Streaming_MD_state_64 *state,
  uint8_t *input,
  uint32_t input_len
);







void Hacl_Hash_SHA2_digest_512(Hacl_Streaming_MD_state_64 *state, uint8_t *output);






void Hacl_Hash_SHA2_free_512(Hacl_Streaming_MD_state_64 *state);




void Hacl_Hash_SHA2_hash_512(uint8_t *output, uint8_t *input, uint32_t input_len);

Hacl_Streaming_MD_state_64 *Hacl_Hash_SHA2_malloc_384(void);

void Hacl_Hash_SHA2_reset_384(Hacl_Streaming_MD_state_64 *state);

Hacl_Streaming_Types_error_code
Hacl_Hash_SHA2_update_384(
  Hacl_Streaming_MD_state_64 *state,
  uint8_t *input,
  uint32_t input_len
);






void Hacl_Hash_SHA2_digest_384(Hacl_Streaming_MD_state_64 *state, uint8_t *output);

void Hacl_Hash_SHA2_free_384(Hacl_Streaming_MD_state_64 *state);




void Hacl_Hash_SHA2_hash_384(uint8_t *output, uint8_t *input, uint32_t input_len);
# 40 "../include/internal/Hacl_Hash_SHA2.h" 2

static const
uint32_t
Hacl_Hash_SHA2_h224[8U] =
  {
    0xc1059ed8U, 0x367cd507U, 0x3070dd17U, 0xf70e5939U, 0xffc00b31U, 0x68581511U, 0x64f98fa7U,
    0xbefa4fa4U
  };

static const
uint32_t
Hacl_Hash_SHA2_h256[8U] =
  {
    0x6a09e667U, 0xbb67ae85U, 0x3c6ef372U, 0xa54ff53aU, 0x510e527fU, 0x9b05688cU, 0x1f83d9abU,
    0x5be0cd19U
  };

static const
uint64_t
Hacl_Hash_SHA2_h384[8U] =
  {
    0xcbbb9d5dc1059ed8ULL, 0x629a292a367cd507ULL, 0x9159015a3070dd17ULL, 0x152fecd8f70e5939ULL,
    0x67332667ffc00b31ULL, 0x8eb44a8768581511ULL, 0xdb0c2e0d64f98fa7ULL, 0x47b5481dbefa4fa4ULL
  };

static const
uint64_t
Hacl_Hash_SHA2_h512[8U] =
  {
    0x6a09e667f3bcc908ULL, 0xbb67ae8584caa73bULL, 0x3c6ef372fe94f82bULL, 0xa54ff53a5f1d36f1ULL,
    0x510e527fade682d1ULL, 0x9b05688c2b3e6c1fULL, 0x1f83d9abfb41bd6bULL, 0x5be0cd19137e2179ULL
  };

static const
uint32_t
Hacl_Hash_SHA2_k224_256[64U] =
  {
    0x428a2f98U, 0x71374491U, 0xb5c0fbcfU, 0xe9b5dba5U, 0x3956c25bU, 0x59f111f1U, 0x923f82a4U,
    0xab1c5ed5U, 0xd807aa98U, 0x12835b01U, 0x243185beU, 0x550c7dc3U, 0x72be5d74U, 0x80deb1feU,
    0x9bdc06a7U, 0xc19bf174U, 0xe49b69c1U, 0xefbe4786U, 0x0fc19dc6U, 0x240ca1ccU, 0x2de92c6fU,
    0x4a7484aaU, 0x5cb0a9dcU, 0x76f988daU, 0x983e5152U, 0xa831c66dU, 0xb00327c8U, 0xbf597fc7U,
    0xc6e00bf3U, 0xd5a79147U, 0x06ca6351U, 0x14292967U, 0x27b70a85U, 0x2e1b2138U, 0x4d2c6dfcU,
    0x53380d13U, 0x650a7354U, 0x766a0abbU, 0x81c2c92eU, 0x92722c85U, 0xa2bfe8a1U, 0xa81a664bU,
    0xc24b8b70U, 0xc76c51a3U, 0xd192e819U, 0xd6990624U, 0xf40e3585U, 0x106aa070U, 0x19a4c116U,
    0x1e376c08U, 0x2748774cU, 0x34b0bcb5U, 0x391c0cb3U, 0x4ed8aa4aU, 0x5b9cca4fU, 0x682e6ff3U,
    0x748f82eeU, 0x78a5636fU, 0x84c87814U, 0x8cc70208U, 0x90befffaU, 0xa4506cebU, 0xbef9a3f7U,
    0xc67178f2U
  };

static const
uint64_t
Hacl_Hash_SHA2_k384_512[80U] =
  {
    0x428a2f98d728ae22ULL, 0x7137449123ef65cdULL, 0xb5c0fbcfec4d3b2fULL, 0xe9b5dba58189dbbcULL,
    0x3956c25bf348b538ULL, 0x59f111f1b605d019ULL, 0x923f82a4af194f9bULL, 0xab1c5ed5da6d8118ULL,
    0xd807aa98a3030242ULL, 0x12835b0145706fbeULL, 0x243185be4ee4b28cULL, 0x550c7dc3d5ffb4e2ULL,
    0x72be5d74f27b896fULL, 0x80deb1fe3b1696b1ULL, 0x9bdc06a725c71235ULL, 0xc19bf174cf692694ULL,
    0xe49b69c19ef14ad2ULL, 0xefbe4786384f25e3ULL, 0x0fc19dc68b8cd5b5ULL, 0x240ca1cc77ac9c65ULL,
    0x2de92c6f592b0275ULL, 0x4a7484aa6ea6e483ULL, 0x5cb0a9dcbd41fbd4ULL, 0x76f988da831153b5ULL,
    0x983e5152ee66dfabULL, 0xa831c66d2db43210ULL, 0xb00327c898fb213fULL, 0xbf597fc7beef0ee4ULL,
    0xc6e00bf33da88fc2ULL, 0xd5a79147930aa725ULL, 0x06ca6351e003826fULL, 0x142929670a0e6e70ULL,
    0x27b70a8546d22ffcULL, 0x2e1b21385c26c926ULL, 0x4d2c6dfc5ac42aedULL, 0x53380d139d95b3dfULL,
    0x650a73548baf63deULL, 0x766a0abb3c77b2a8ULL, 0x81c2c92e47edaee6ULL, 0x92722c851482353bULL,
    0xa2bfe8a14cf10364ULL, 0xa81a664bbc423001ULL, 0xc24b8b70d0f89791ULL, 0xc76c51a30654be30ULL,
    0xd192e819d6ef5218ULL, 0xd69906245565a910ULL, 0xf40e35855771202aULL, 0x106aa07032bbd1b8ULL,
    0x19a4c116b8d2d0c8ULL, 0x1e376c085141ab53ULL, 0x2748774cdf8eeb99ULL, 0x34b0bcb5e19b48a8ULL,
    0x391c0cb3c5c95a63ULL, 0x4ed8aa4ae3418acbULL, 0x5b9cca4f7763e373ULL, 0x682e6ff3d6b2b8a3ULL,
    0x748f82ee5defb2fcULL, 0x78a5636f43172f60ULL, 0x84c87814a1f0ab72ULL, 0x8cc702081a6439ecULL,
    0x90befffa23631e28ULL, 0xa4506cebde82bde9ULL, 0xbef9a3f7b2c67915ULL, 0xc67178f2e372532bULL,
    0xca273eceea26619cULL, 0xd186b8c721c0c207ULL, 0xeada7dd6cde0eb1eULL, 0xf57d4f7fee6ed178ULL,
    0x06f067aa72176fbaULL, 0x0a637dc5a2c898a6ULL, 0x113f9804bef90daeULL, 0x1b710b35131c471bULL,
    0x28db77f523047d84ULL, 0x32caab7b40c72493ULL, 0x3c9ebe0a15c9bebcULL, 0x431d67c49c100d4cULL,
    0x4cc5d4becb3e42b6ULL, 0x597f299cfc657e2aULL, 0x5fcb6fab3ad6faecULL, 0x6c44198c4a475817ULL
  };

void Hacl_Hash_SHA2_sha256_init(uint32_t *hash);

void Hacl_Hash_SHA2_sha256_update_nblocks(uint32_t len, uint8_t *b, uint32_t *st);

void
Hacl_Hash_SHA2_sha256_update_last(uint64_t totlen, uint32_t len, uint8_t *b, uint32_t *hash);

void Hacl_Hash_SHA2_sha256_finish(uint32_t *st, uint8_t *h);

void Hacl_Hash_SHA2_sha224_init(uint32_t *hash);

void
Hacl_Hash_SHA2_sha224_update_last(uint64_t totlen, uint32_t len, uint8_t *b, uint32_t *st);

void Hacl_Hash_SHA2_sha224_finish(uint32_t *st, uint8_t *h);

void Hacl_Hash_SHA2_sha512_init(uint64_t *hash);

void Hacl_Hash_SHA2_sha512_update_nblocks(uint32_t len, uint8_t *b, uint64_t *st);

void
Hacl_Hash_SHA2_sha512_update_last(
  FStar_UInt128_uint128 totlen,
  uint32_t len,
  uint8_t *b,
  uint64_t *hash
);

void Hacl_Hash_SHA2_sha512_finish(uint64_t *st, uint8_t *h);

void Hacl_Hash_SHA2_sha384_init(uint64_t *hash);

void Hacl_Hash_SHA2_sha384_update_nblocks(uint32_t len, uint8_t *b, uint64_t *st);

void
Hacl_Hash_SHA2_sha384_update_last(
  FStar_UInt128_uint128 totlen,
  uint32_t len,
  uint8_t *b,
  uint64_t *st
);

void Hacl_Hash_SHA2_sha384_finish(uint64_t *st, uint8_t *h);
# 40 "../include/internal/Hacl_HMAC.h" 2
# 1 "../include/internal/Hacl_Hash_SHA1.h" 1
# 34 "../include/internal/Hacl_Hash_SHA1.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Hash_SHA1.h" 2



# 1 "../include/internal/../Hacl_Hash_SHA1.h" 1
# 34 "../include/internal/../Hacl_Hash_SHA1.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Hash_SHA1.h" 2





typedef Hacl_Streaming_MD_state_32 Hacl_Hash_SHA1_state_t;

Hacl_Streaming_MD_state_32 *Hacl_Hash_SHA1_malloc(void);

void Hacl_Hash_SHA1_reset(Hacl_Streaming_MD_state_32 *state);




Hacl_Streaming_Types_error_code
Hacl_Hash_SHA1_update(Hacl_Streaming_MD_state_32 *state, uint8_t *chunk, uint32_t chunk_len);

void Hacl_Hash_SHA1_digest(Hacl_Streaming_MD_state_32 *state, uint8_t *output);

void Hacl_Hash_SHA1_free(Hacl_Streaming_MD_state_32 *state);

Hacl_Streaming_MD_state_32 *Hacl_Hash_SHA1_copy(Hacl_Streaming_MD_state_32 *state);

void Hacl_Hash_SHA1_hash(uint8_t *output, uint8_t *input, uint32_t input_len);
# 39 "../include/internal/Hacl_Hash_SHA1.h" 2

void Hacl_Hash_SHA1_init(uint32_t *s);

void Hacl_Hash_SHA1_finish(uint32_t *s, uint8_t *dst);

void Hacl_Hash_SHA1_update_multi(uint32_t *s, uint8_t *blocks, uint32_t n_blocks);

void
Hacl_Hash_SHA1_update_last(uint32_t *s, uint64_t prev_len, uint8_t *input, uint32_t input_len);

void Hacl_Hash_SHA1_hash_oneshot(uint8_t *output, uint8_t *input, uint32_t input_len);
# 41 "../include/internal/Hacl_HMAC.h" 2
# 1 "../include/internal/Hacl_Hash_Blake2s.h" 1
# 34 "../include/internal/Hacl_Hash_Blake2s.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Hash_Blake2s.h" 2



# 1 "../include/internal/Hacl_Impl_Blake2_Constants.h" 1
# 34 "../include/internal/Hacl_Impl_Blake2_Constants.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Impl_Blake2_Constants.h" 2



static const
uint32_t
Hacl_Hash_Blake2s_sigmaTable[160U] =
  {
    0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 14U, 10U, 4U, 8U, 9U, 15U,
    13U, 6U, 1U, 12U, 0U, 2U, 11U, 7U, 5U, 3U, 11U, 8U, 12U, 0U, 5U, 2U, 15U, 13U, 10U, 14U, 3U, 6U,
    7U, 1U, 9U, 4U, 7U, 9U, 3U, 1U, 13U, 12U, 11U, 14U, 2U, 6U, 5U, 10U, 4U, 0U, 15U, 8U, 9U, 0U,
    5U, 7U, 2U, 4U, 10U, 15U, 14U, 1U, 11U, 12U, 6U, 8U, 3U, 13U, 2U, 12U, 6U, 10U, 0U, 11U, 8U, 3U,
    4U, 13U, 7U, 5U, 15U, 14U, 1U, 9U, 12U, 5U, 1U, 15U, 14U, 13U, 4U, 10U, 0U, 7U, 6U, 3U, 9U, 2U,
    8U, 11U, 13U, 11U, 7U, 14U, 12U, 1U, 3U, 9U, 5U, 0U, 15U, 4U, 8U, 6U, 2U, 10U, 6U, 15U, 14U, 9U,
    11U, 3U, 0U, 8U, 12U, 2U, 13U, 7U, 1U, 4U, 10U, 5U, 10U, 2U, 8U, 4U, 7U, 6U, 1U, 5U, 15U, 11U,
    9U, 14U, 3U, 12U, 13U
  };

static const
uint32_t
Hacl_Hash_Blake2s_ivTable_S[8U] =
  {
    0x6A09E667U, 0xBB67AE85U, 0x3C6EF372U, 0xA54FF53AU, 0x510E527FU, 0x9B05688CU, 0x1F83D9ABU,
    0x5BE0CD19U
  };

static const
uint64_t
Hacl_Hash_Blake2s_ivTable_B[8U] =
  {
    0x6A09E667F3BCC908ULL, 0xBB67AE8584CAA73BULL, 0x3C6EF372FE94F82BULL, 0xA54FF53A5F1D36F1ULL,
    0x510E527FADE682D1ULL, 0x9B05688C2B3E6C1FULL, 0x1F83D9ABFB41BD6BULL, 0x5BE0CD19137E2179ULL
  };
# 39 "../include/internal/Hacl_Hash_Blake2s.h" 2
# 1 "../include/internal/../Hacl_Hash_Blake2s.h" 1
# 34 "../include/internal/../Hacl_Hash_Blake2s.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Hash_Blake2s.h" 2





typedef struct Hacl_Hash_Blake2s_block_state_t_s
{
  uint32_t *fst;
  uint32_t *snd;
}
Hacl_Hash_Blake2s_block_state_t;

typedef struct Hacl_Hash_Blake2s_state_t_s
{
  Hacl_Hash_Blake2s_block_state_t block_state;
  uint8_t *buf;
  uint64_t total_len;
}
Hacl_Hash_Blake2s_state_t;




Hacl_Hash_Blake2s_state_t *Hacl_Hash_Blake2s_malloc(void);




void Hacl_Hash_Blake2s_reset(Hacl_Hash_Blake2s_state_t *state);




Hacl_Streaming_Types_error_code
Hacl_Hash_Blake2s_update(Hacl_Hash_Blake2s_state_t *state, uint8_t *chunk, uint32_t chunk_len);




void Hacl_Hash_Blake2s_digest(Hacl_Hash_Blake2s_state_t *state, uint8_t *output);




void Hacl_Hash_Blake2s_free(Hacl_Hash_Blake2s_state_t *state);
# 91 "../include/internal/../Hacl_Hash_Blake2s.h"
void
Hacl_Hash_Blake2s_hash_with_key(
  uint8_t *output,
  uint32_t output_len,
  uint8_t *input,
  uint32_t input_len,
  uint8_t *key,
  uint32_t key_len
);
# 40 "../include/internal/Hacl_Hash_Blake2s.h" 2

void Hacl_Hash_Blake2s_init(uint32_t *hash, uint32_t kk, uint32_t nn);

void
Hacl_Hash_Blake2s_update_multi(
  uint32_t len,
  uint32_t *wv,
  uint32_t *hash,
  uint64_t prev,
  uint8_t *blocks,
  uint32_t nb
);

void
Hacl_Hash_Blake2s_update_last(
  uint32_t len,
  uint32_t *wv,
  uint32_t *hash,
  uint64_t prev,
  uint32_t rem,
  uint8_t *d
);

void Hacl_Hash_Blake2s_finish(uint32_t nn, uint8_t *output, uint32_t *hash);
# 42 "../include/internal/Hacl_HMAC.h" 2
# 1 "../include/internal/Hacl_Hash_Blake2b.h" 1
# 34 "../include/internal/Hacl_Hash_Blake2b.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/Hacl_Hash_Blake2b.h" 2




# 1 "../include/internal/../Hacl_Hash_Blake2b.h" 1
# 34 "../include/internal/../Hacl_Hash_Blake2b.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_Hash_Blake2b.h" 2






typedef struct Hacl_Hash_Blake2b_block_state_t_s
{
  uint64_t *fst;
  uint64_t *snd;
}
Hacl_Hash_Blake2b_block_state_t;

typedef struct Hacl_Hash_Blake2b_state_t_s
{
  Hacl_Hash_Blake2b_block_state_t block_state;
  uint8_t *buf;
  uint64_t total_len;
}
Hacl_Hash_Blake2b_state_t;




Hacl_Hash_Blake2b_state_t *Hacl_Hash_Blake2b_malloc(void);




void Hacl_Hash_Blake2b_reset(Hacl_Hash_Blake2b_state_t *state);




Hacl_Streaming_Types_error_code
Hacl_Hash_Blake2b_update(Hacl_Hash_Blake2b_state_t *state, uint8_t *chunk, uint32_t chunk_len);




void Hacl_Hash_Blake2b_digest(Hacl_Hash_Blake2b_state_t *state, uint8_t *output);




void Hacl_Hash_Blake2b_free(Hacl_Hash_Blake2b_state_t *state);
# 92 "../include/internal/../Hacl_Hash_Blake2b.h"
void
Hacl_Hash_Blake2b_hash_with_key(
  uint8_t *output,
  uint32_t output_len,
  uint8_t *input,
  uint32_t input_len,
  uint8_t *key,
  uint32_t key_len
);
# 40 "../include/internal/Hacl_Hash_Blake2b.h" 2

void Hacl_Hash_Blake2b_init(uint64_t *hash, uint32_t kk, uint32_t nn);

void
Hacl_Hash_Blake2b_update_multi(
  uint32_t len,
  uint64_t *wv,
  uint64_t *hash,
  FStar_UInt128_uint128 prev,
  uint8_t *blocks,
  uint32_t nb
);

void
Hacl_Hash_Blake2b_update_last(
  uint32_t len,
  uint64_t *wv,
  uint64_t *hash,
  FStar_UInt128_uint128 prev,
  uint32_t rem,
  uint8_t *d
);

void Hacl_Hash_Blake2b_finish(uint32_t nn, uint8_t *output, uint64_t *hash);
# 43 "../include/internal/Hacl_HMAC.h" 2
# 1 "../include/internal/../Hacl_HMAC.h" 1
# 34 "../include/internal/../Hacl_HMAC.h"
# 1 "../karamel/include/krml/internal/types.h" 1
# 35 "../include/internal/../Hacl_HMAC.h" 2




# 1 "../include/internal/../Hacl_Hash_SHA2.h" 1
# 40 "../include/internal/../Hacl_HMAC.h" 2
# 1 "../include/internal/../Hacl_Hash_Blake2s.h" 1
# 41 "../include/internal/../Hacl_HMAC.h" 2
# 1 "../include/internal/../Hacl_Hash_Blake2b.h" 1
# 42 "../include/internal/../Hacl_HMAC.h" 2







void
Hacl_HMAC_compute_sha1(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);







void
Hacl_HMAC_compute_sha2_256(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);







void
Hacl_HMAC_compute_sha2_384(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);







void
Hacl_HMAC_compute_sha2_512(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);







void
Hacl_HMAC_compute_blake2s_32(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);







void
Hacl_HMAC_compute_blake2b_32(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
);
# 44 "../include/internal/Hacl_HMAC.h" 2

typedef struct K___uint32_t_uint32_t_s
{
  uint32_t fst;
  uint32_t snd;
}
K___uint32_t_uint32_t;
# 27 "Hacl_HMAC.c" 2
# 40 "Hacl_HMAC.c"
void
Hacl_HMAC_compute_sha1(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 64U;
  do {
# 50 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 50 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 50 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 50 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 50); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 20U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA1_hash_oneshot(nkey, key, key_len);
  }
cfgboost(__COUNTER__);
  do {
# 73 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 73 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 73 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 73 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 73); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 82 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 82 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 82 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 82 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 82); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint32_t s[5U] = { 0x67452301U, 0xefcdab89U, 0x98badcfeU, 0x10325476U, 0xc3d2e1f0U };
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA1_update_last(s, 0ULL, ipad, 64U);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 64U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    Hacl_Hash_SHA1_update_multi(s, ipad, 1U);
    Hacl_Hash_SHA1_update_multi(s, full_blocks, n_blocks);
    Hacl_Hash_SHA1_update_last(s, (uint64_t)64U + (uint64_t)full_blocks_len, rem, rem_len);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_SHA1_finish(s, dst1);
  uint8_t *hash1 = ipad;
  Hacl_Hash_SHA1_init(s);
  uint32_t block_len = 64U;
  uint32_t n_blocks0 = 20U / block_len;
  uint32_t rem0 = 20U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 20U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  Hacl_Hash_SHA1_update_multi(s, opad, 1U);
  Hacl_Hash_SHA1_update_multi(s, full_blocks, n_blocks);
  Hacl_Hash_SHA1_update_last(s, (uint64_t)64U + (uint64_t)full_blocks_len, rem, rem_len);
  Hacl_Hash_SHA1_finish(s, dst);
cfgboost(__COUNTER__);
}







void
Hacl_HMAC_compute_sha2_256(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 64U;
  do {
# 164 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 164 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 164 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 164 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 164); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 32U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_hash_256(nkey, key, key_len);
  }
cfgboost(__COUNTER__);
  do {
# 187 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 187 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 187 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 187 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 187); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 196 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 196 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 196 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 196 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 196); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint32_t st[8U] = { 0U };
  do { uint32_t i = 0U; { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } { uint32_t *os = st; uint32_t x = Hacl_Hash_SHA2_h256[i]; os[i] = x; i += 1U; (void) i; } } while (0)





               ;
  uint32_t *s = st;
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_sha256_update_last(0ULL + (uint64_t)64U, 64U, ipad, s);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 64U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    Hacl_Hash_SHA2_sha256_update_nblocks(64U, ipad, s);
    Hacl_Hash_SHA2_sha256_update_nblocks(n_blocks * 64U, full_blocks, s);
    Hacl_Hash_SHA2_sha256_update_last((uint64_t)64U + (uint64_t)full_blocks_len + (uint64_t)rem_len,
      rem_len,
      rem,
      s);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_SHA2_sha256_finish(s, dst1);
  uint8_t *hash1 = ipad;
  Hacl_Hash_SHA2_sha256_init(s);
  uint32_t block_len = 64U;
  uint32_t n_blocks0 = 32U / block_len;
  uint32_t rem0 = 32U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 32U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  Hacl_Hash_SHA2_sha256_update_nblocks(64U, opad, s);
  Hacl_Hash_SHA2_sha256_update_nblocks(n_blocks * 64U, full_blocks, s);
  Hacl_Hash_SHA2_sha256_update_last((uint64_t)64U + (uint64_t)full_blocks_len + (uint64_t)rem_len,
    rem_len,
    rem,
    s);
  Hacl_Hash_SHA2_sha256_finish(s, dst);
cfgboost(__COUNTER__);
}







void
Hacl_HMAC_compute_sha2_384(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 128U;
  do {
# 292 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 292 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 292 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 292 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 292); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 48U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_hash_384(nkey, key, key_len);
  }
cfgboost(__COUNTER__);
  do {
# 315 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 315 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 315 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 315 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 315); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 324 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 324 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 324 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 324 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 324); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint64_t st[8U] = { 0U };
  do { uint32_t i = 0U; { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h384[i]; os[i] = x; i += 1U; (void) i; } } while (0)





               ;
  uint64_t *s = st;
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_sha384_update_last(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128(0ULL),
        FStar_UInt128_uint64_to_uint128((uint64_t)128U)),
      128U,
      ipad,
      s);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 128U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    Hacl_Hash_SHA2_sha384_update_nblocks(128U, ipad, s);
    Hacl_Hash_SHA2_sha384_update_nblocks(n_blocks * 128U, full_blocks, s);
    Hacl_Hash_SHA2_sha384_update_last(FStar_UInt128_add(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
          FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
        FStar_UInt128_uint64_to_uint128((uint64_t)rem_len)),
      rem_len,
      rem,
      s);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_SHA2_sha384_finish(s, dst1);
  uint8_t *hash1 = ipad;
  Hacl_Hash_SHA2_sha384_init(s);
  uint32_t block_len = 128U;
  uint32_t n_blocks0 = 48U / block_len;
  uint32_t rem0 = 48U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 48U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  Hacl_Hash_SHA2_sha384_update_nblocks(128U, opad, s);
  Hacl_Hash_SHA2_sha384_update_nblocks(n_blocks * 128U, full_blocks, s);
  Hacl_Hash_SHA2_sha384_update_last(FStar_UInt128_add(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
        FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
      FStar_UInt128_uint64_to_uint128((uint64_t)rem_len)),
    rem_len,
    rem,
    s);
  Hacl_Hash_SHA2_sha384_finish(s, dst);
cfgboost(__COUNTER__);
}







void
Hacl_HMAC_compute_sha2_512(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 128U;
  do {
# 428 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 428 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 428 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 428 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 428); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 64U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_hash_512(nkey, key, key_len);
  }
cfgboost(__COUNTER__);
  do {
# 451 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 451 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 451 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 451 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 451); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 460 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 460 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 460 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 460 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 460); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint64_t st[8U] = { 0U };
  do { uint32_t i = 0U; { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } { uint64_t *os = st; uint64_t x = Hacl_Hash_SHA2_h512[i]; os[i] = x; i += 1U; (void) i; } } while (0)





               ;
  uint64_t *s = st;
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    Hacl_Hash_SHA2_sha512_update_last(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128(0ULL),
        FStar_UInt128_uint64_to_uint128((uint64_t)128U)),
      128U,
      ipad,
      s);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 128U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    Hacl_Hash_SHA2_sha512_update_nblocks(128U, ipad, s);
    Hacl_Hash_SHA2_sha512_update_nblocks(n_blocks * 128U, full_blocks, s);
    Hacl_Hash_SHA2_sha512_update_last(FStar_UInt128_add(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
          FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
        FStar_UInt128_uint64_to_uint128((uint64_t)rem_len)),
      rem_len,
      rem,
      s);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_SHA2_sha512_finish(s, dst1);
  uint8_t *hash1 = ipad;
  Hacl_Hash_SHA2_sha512_init(s);
  uint32_t block_len = 128U;
  uint32_t n_blocks0 = 64U / block_len;
  uint32_t rem0 = 64U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 64U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  Hacl_Hash_SHA2_sha512_update_nblocks(128U, opad, s);
  Hacl_Hash_SHA2_sha512_update_nblocks(n_blocks * 128U, full_blocks, s);
  Hacl_Hash_SHA2_sha512_update_last(FStar_UInt128_add(FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
        FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
      FStar_UInt128_uint64_to_uint128((uint64_t)rem_len)),
    rem_len,
    rem,
    s);
  Hacl_Hash_SHA2_sha512_finish(s, dst);
cfgboost(__COUNTER__);
}







void
Hacl_HMAC_compute_blake2s_32(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 64U;
  do {
# 564 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 564 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 564 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 564 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 564); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 32U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 64U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_Blake2s_hash_with_key(nkey, 32U, key, key_len, 
# 585 "Hacl_HMAC.c" 3 4
                                                            ((void *)0)
# 585 "Hacl_HMAC.c"
                                                                , 0U);
  }
cfgboost(__COUNTER__);
  do {
# 587 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 587 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 587 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 587 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 587); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 596 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 596 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 596 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 596 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 596); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint32_t s[16U] = { 0U };
  Hacl_Hash_Blake2s_init(s, 0U, 32U);
  uint32_t *s0 = s;
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t wv[16U] = { 0U };
    Hacl_Hash_Blake2s_update_last(64U, wv, s0, 0ULL, 64U, ipad);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 64U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    uint32_t wv[16U] = { 0U };
    Hacl_Hash_Blake2s_update_multi(64U, wv, s0, 0ULL, ipad, 1U);
    uint32_t wv0[16U] = { 0U };
    Hacl_Hash_Blake2s_update_multi(n_blocks * 64U,
      wv0,
      s0,
      (uint64_t)block_len,
      full_blocks,
      n_blocks);
    uint32_t wv1[16U] = { 0U };
    Hacl_Hash_Blake2s_update_last(rem_len,
      wv1,
      s0,
      (uint64_t)64U + (uint64_t)full_blocks_len,
      rem_len,
      rem);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_Blake2s_finish(32U, dst1, s0);
  uint8_t *hash1 = ipad;
  Hacl_Hash_Blake2s_init(s0, 0U, 32U);
  uint32_t block_len = 64U;
  uint32_t n_blocks0 = 32U / block_len;
  uint32_t rem0 = 32U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 32U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  uint32_t wv[16U] = { 0U };
  Hacl_Hash_Blake2s_update_multi(64U, wv, s0, 0ULL, opad, 1U);
  uint32_t wv0[16U] = { 0U };
  Hacl_Hash_Blake2s_update_multi(n_blocks * 64U,
    wv0,
    s0,
    (uint64_t)block_len,
    full_blocks,
    n_blocks);
  uint32_t wv1[16U] = { 0U };
  Hacl_Hash_Blake2s_update_last(rem_len,
    wv1,
    s0,
    (uint64_t)64U + (uint64_t)full_blocks_len,
    rem_len,
    rem);
  Hacl_Hash_Blake2s_finish(32U, dst, s0);
cfgboost(__COUNTER__);
}







void
Hacl_HMAC_compute_blake2b_32(
  uint8_t *dst,
  uint8_t *key,
  uint32_t key_len,
  uint8_t *data,
  uint32_t data_len
)
{
cfgboost(__COUNTER__);
  uint32_t l = 128U;
  do {
# 707 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 707 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 707 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 707 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 707); exit(253); } } while (0);
  uint8_t key_block[l];
  memset(key_block, 0U, l * sizeof (uint8_t));
  uint8_t *nkey = key_block;
  uint32_t ite;
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    ite = key_len;
  }
  else
  {
cfgboost(__COUNTER__);
    ite = 64U;
  }
cfgboost(__COUNTER__);
  uint8_t *zeroes = key_block + ite;
  (void)(zeroes);
  if (key_len <= 128U)
  {
cfgboost(__COUNTER__);
    memcpy(nkey, key, key_len * sizeof (uint8_t));
  }
  else
  {
cfgboost(__COUNTER__);
    Hacl_Hash_Blake2b_hash_with_key(nkey, 64U, key, key_len, 
# 728 "Hacl_HMAC.c" 3 4
                                                            ((void *)0)
# 728 "Hacl_HMAC.c"
                                                                , 0U);
  }
cfgboost(__COUNTER__);
  do {
# 730 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 730 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 730 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 730 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 730); exit(253); } } while (0);
  uint8_t ipad[l];
  memset(ipad, 0x36U, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = ipad[i];
    uint8_t yi = key_block[i];
    ipad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  do {
# 739 "Hacl_HMAC.c"
#pragma GCC diagnostic ignored "-Wtype-limits"
# 739 "Hacl_HMAC.c"
  if (((size_t)(l)) > ((size_t)(
# 739 "Hacl_HMAC.c" 3 4
 (18446744073709551615UL) 
# 739 "Hacl_HMAC.c"
 / (sizeof (uint8_t))))) { printf( "Maximum allocatable size exceeded, aborting before overflow at " "%s:%d\n", "Hacl_HMAC.c", 739); exit(253); } } while (0);
  uint8_t opad[l];
  memset(opad, 0x5cU, l * sizeof (uint8_t));
  for (uint32_t i = 0U; i < l; i++)
  {
cfgboost(__COUNTER__);
    uint8_t xi = opad[i];
    uint8_t yi = key_block[i];
    opad[i] = (uint32_t)xi ^ (uint32_t)yi;
  }
cfgboost(__COUNTER__);
  uint64_t s[16U] = { 0U };
  Hacl_Hash_Blake2b_init(s, 0U, 64U);
  uint64_t *s0 = s;
  uint8_t *dst1 = ipad;
  if (data_len == 0U)
  {
cfgboost(__COUNTER__);
    uint64_t wv[16U] = { 0U };
    Hacl_Hash_Blake2b_update_last(128U, wv, s0, FStar_UInt128_uint64_to_uint128(0ULL), 128U, ipad);
  }
  else
  {
cfgboost(__COUNTER__);
    uint32_t block_len = 128U;
    uint32_t n_blocks0 = data_len / block_len;
    uint32_t rem0 = data_len % block_len;
    K___uint32_t_uint32_t scrut;
    if (n_blocks0 > 0U && rem0 == 0U)
    {
cfgboost(__COUNTER__);
      uint32_t n_blocks_ = n_blocks0 - 1U;
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = data_len - n_blocks_ * block_len });
    }
    else
    {
cfgboost(__COUNTER__);
      scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
    }
cfgboost(__COUNTER__);
    uint32_t n_blocks = scrut.fst;
    uint32_t rem_len = scrut.snd;
    uint32_t full_blocks_len = n_blocks * block_len;
    uint8_t *full_blocks = data;
    uint8_t *rem = data + full_blocks_len;
    uint64_t wv[16U] = { 0U };
    Hacl_Hash_Blake2b_update_multi(128U, wv, s0, FStar_UInt128_uint64_to_uint128(0ULL), ipad, 1U);
    uint64_t wv0[16U] = { 0U };
    Hacl_Hash_Blake2b_update_multi(n_blocks * 128U,
      wv0,
      s0,
      FStar_UInt128_uint64_to_uint128((uint64_t)block_len),
      full_blocks,
      n_blocks);
    uint64_t wv1[16U] = { 0U };
    Hacl_Hash_Blake2b_update_last(rem_len,
      wv1,
      s0,
      FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
        FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
      rem_len,
      rem);
  }
cfgboost(__COUNTER__);
  Hacl_Hash_Blake2b_finish(64U, dst1, s0);
  uint8_t *hash1 = ipad;
  Hacl_Hash_Blake2b_init(s0, 0U, 64U);
  uint32_t block_len = 128U;
  uint32_t n_blocks0 = 64U / block_len;
  uint32_t rem0 = 64U % block_len;
  K___uint32_t_uint32_t scrut;
  if (n_blocks0 > 0U && rem0 == 0U)
  {
cfgboost(__COUNTER__);
    uint32_t n_blocks_ = n_blocks0 - 1U;
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks_, .snd = 64U - n_blocks_ * block_len });
  }
  else
  {
cfgboost(__COUNTER__);
    scrut = ((K___uint32_t_uint32_t){ .fst = n_blocks0, .snd = rem0 });
  }
cfgboost(__COUNTER__);
  uint32_t n_blocks = scrut.fst;
  uint32_t rem_len = scrut.snd;
  uint32_t full_blocks_len = n_blocks * block_len;
  uint8_t *full_blocks = hash1;
  uint8_t *rem = hash1 + full_blocks_len;
  uint64_t wv[16U] = { 0U };
  Hacl_Hash_Blake2b_update_multi(128U, wv, s0, FStar_UInt128_uint64_to_uint128(0ULL), opad, 1U);
  uint64_t wv0[16U] = { 0U };
  Hacl_Hash_Blake2b_update_multi(n_blocks * 128U,
    wv0,
    s0,
    FStar_UInt128_uint64_to_uint128((uint64_t)block_len),
    full_blocks,
    n_blocks);
  uint64_t wv1[16U] = { 0U };
  Hacl_Hash_Blake2b_update_last(rem_len,
    wv1,
    s0,
    FStar_UInt128_add(FStar_UInt128_uint64_to_uint128((uint64_t)128U),
      FStar_UInt128_uint64_to_uint128((uint64_t)full_blocks_len)),
    rem_len,
    rem);
  Hacl_Hash_Blake2b_finish(64U, dst, s0);
cfgboost(__COUNTER__);
}

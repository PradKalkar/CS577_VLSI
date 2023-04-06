// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 439 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 440 "/usr/include/features.h" 2 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
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
# 34 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 2 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/params.h" 1



# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/config.h" 1
# 5 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/params.h" 2
# 3 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.h" 1



# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 31 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 5 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.h" 2


# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/polyvec.h" 1





# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/poly.h" 1






typedef struct {
  int32_t coeffs[256];
} poly;


void poly_reduce(poly *a);

void poly_caddq(poly *a);

void poly_freeze(poly *a);


void poly_add(poly *c, const poly *a, const poly *b);

void poly_sub(poly *c, const poly *a, const poly *b);

void poly_shiftl(poly *a);


void poly_ntt(poly *a);

void poly_invntt_tomont(poly *a);

void poly_pointwise_montgomery(poly *c, const poly *a, const poly *b);


void poly_power2round(poly *a1, poly *a0, const poly *a);

void poly_decompose(poly *a1, poly *a0, const poly *a);

unsigned int poly_make_hint(poly *h, const poly *a0, const poly *a1);

void poly_use_hint(poly *b, const poly *a, const poly *h);


int poly_chknorm(const poly *a, int32_t B);

void poly_uniform(poly *a,
                  const uint8_t seed[32],
                  uint16_t nonce);

void poly_uniform_eta(poly *a,
                      const uint8_t seed[32],
                      uint16_t nonce);

void poly_uniform_gamma1(poly *a,
                         const uint8_t seed[48],
                         uint16_t nonce);

void poly_challenge(poly *c, const uint8_t seed[32]);


void polyeta_pack(uint8_t *r, const poly *a);

void polyeta_unpack(poly *r, const uint8_t *a);


void polyt1_pack(uint8_t *r, const poly *a);

void polyt1_unpack(poly *r, const uint8_t *a);


void polyt0_pack(uint8_t *r, const poly *a);

void polyt0_unpack(poly *r, const uint8_t *a);


void polyz_pack(uint8_t *r, const poly *a);

void polyz_unpack(poly *r, const uint8_t *a);


void polyw1_pack(uint8_t *r, const poly *a);
# 7 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/polyvec.h" 2


typedef struct {
  poly vec[4];
} polyvecl;


void polyvecl_uniform_eta(polyvecl *v, const uint8_t seed[32], uint16_t nonce);


void polyvecl_uniform_gamma1(polyvecl *v, const uint8_t seed[32], uint16_t nonce);


void polyvecl_reduce(polyvecl *v);


void polyvecl_freeze(polyvecl *v);


void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);


void polyvecl_ntt(polyvecl *v);

void polyvecl_invntt_tomont(polyvecl *v);

void polyvecl_pointwise_poly_montgomery(polyvecl *r, const poly *a, const polyvecl *v);


void polyvecl_pointwise_acc_montgomery(poly *w,
                                       const polyvecl *u,
                                       const polyvecl *v);



int polyvecl_chknorm(const polyvecl *v, int32_t B);




typedef struct {
  poly vec[4];
} polyveck;


void polyveck_uniform_eta(polyveck *v, const uint8_t seed[32], uint16_t nonce);


void polyveck_reduce(polyveck *v);

void polyveck_caddq(polyveck *v);

void polyveck_freeze(polyveck *v);


void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);

void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);

void polyveck_shiftl(polyveck *v);


void polyveck_ntt(polyveck *v);

void polyveck_invntt_tomont(polyveck *v);

void polyveck_pointwise_poly_montgomery(polyveck *r, const poly *a, const polyveck *v);


int polyveck_chknorm(const polyveck *v, int32_t B);


void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);

void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);

unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *v0,
                                const polyveck *v1);

void polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);


void polyveck_pack_w1(uint8_t r[4*192], const polyveck *w1);


void polyvec_matrix_expand(polyvecl mat[4], const uint8_t rho[32]);


void polyvec_matrix_pointwise_montgomery(polyveck *t, const polyvecl mat[4], const polyvecl *v);
# 8 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.h" 2



void challenge(poly *c, const uint8_t seed[32]);


int crypto_sign_keypair(uint8_t *pk, uint8_t *sk);


int crypto_sign_signature(uint8_t *sig, size_t *siglen,
                          const uint8_t *m, size_t mlen,
                          const uint8_t *sk);


int crypto_sign(uint8_t *sm, size_t *smlen,
                const uint8_t *m, size_t mlen,
                const uint8_t *sk);


int crypto_sign_verify(const uint8_t *sig, size_t siglen,
                       const uint8_t *m, size_t mlen,
                       const uint8_t *pk);


int crypto_sign_open(uint8_t *m, size_t *mlen,
                     const uint8_t *sm, size_t smlen,
                     const uint8_t *pk);
# 4 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/packing.h" 1








void pack_pk(uint8_t pk[(32 + 4*320)],
             const uint8_t rho[32], const polyveck *t1);


void pack_sk(uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)],
             const uint8_t rho[32],
             const uint8_t tr[48],
             const uint8_t key[32],
             const polyveck *t0,
             const polyvecl *s1,
             const polyveck *s2);


void pack_sig(uint8_t sig[(32 + 4*576 + (80 + 4))],
              const uint8_t c[32], const polyvecl *z, const polyveck *h);


void unpack_pk(uint8_t rho[32], polyveck *t1,
               const uint8_t pk[(32 + 4*320)]);


void unpack_sk(uint8_t rho[32],
               uint8_t tr[48],
               uint8_t key[32],
               polyveck *t0,
               polyvecl *s1,
               polyveck *s2,
               const uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)]);


int unpack_sig(uint8_t c[32], polyvecl *z, polyveck *h,
               const uint8_t sig[(32 + 4*576 + (80 + 4))]);
# 5 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2


# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/randombytes.h" 1



# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 5 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/randombytes.h" 2


void randombytes(uint8_t *out, size_t outlen);
# 8 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/symmetric.h" 1
# 35 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/symmetric.h"
# 1 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/fips202.h" 1



# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 5 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/fips202.h" 2
# 15 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/fips202.h"
typedef struct {
  uint64_t s[25];
  unsigned int pos;
} keccak_state;


void shake128_init(keccak_state *state);

void shake128_absorb(keccak_state *state, const uint8_t *in, size_t inlen);

void shake128_finalize(keccak_state *state);

void shake128_squeezeblocks(uint8_t *out, size_t nblocks, keccak_state *state);

void shake128_squeeze(uint8_t *out, size_t outlen, keccak_state *state);


void shake256_init(keccak_state state[1]);

void shake256_absorb(keccak_state state[1], const uint8_t *in, size_t inlen);

void shake256_finalize(keccak_state state[1]);

void shake256_squeezeblocks(uint8_t *out, size_t nblocks, keccak_state state[1]);

void shake256_squeeze(uint8_t *out, size_t outlen, keccak_state state[1]);


void shake128(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen);

void shake256(uint8_t out[3*32], size_t outlen, const uint8_t in[32], size_t inlen);

void sha3_256(uint8_t h[32], const uint8_t *in, size_t inlen);

void sha3_512(uint8_t h[64], const uint8_t *in, size_t inlen);
# 36 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/symmetric.h" 2

typedef keccak_state stream128_state;
typedef keccak_state stream256_state;


void dilithium_shake128_stream_init(keccak_state *state,
                                    const uint8_t seed[32],
                                    uint16_t nonce);


void dilithium_shake256_stream_init(keccak_state *state,
                                    const uint8_t seed[48],
                                    uint16_t nonce);
# 9 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c" 2
# 23 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
int crypto_sign_keypair(uint8_t *pk, uint8_t *sk) {
  uint8_t seedbuf[3*32];
  uint8_t tr[48];
  const uint8_t *rho, *rhoprime, *key;
  polyvecl mat[4];
  polyvecl s1, s1hat;
  polyveck s2, t1, t0;


  randombytes(seedbuf, 32);
  shake256(seedbuf, 3*32, seedbuf, 32);
  rho = seedbuf;
  rhoprime = seedbuf + 32;
  key = seedbuf + 2*32;


  polyvec_matrix_expand(mat, rho);


  polyvecl_uniform_eta(&s1, rhoprime, 0);
  polyveck_uniform_eta(&s2, rhoprime, 4);


  s1hat = s1;
  polyvecl_ntt(&s1hat);
  polyvec_matrix_pointwise_montgomery(&t1, mat, &s1hat);
  polyveck_reduce(&t1);
  polyveck_invntt_tomont(&t1);


  polyveck_add(&t1, &t1, &s2);


  polyveck_caddq(&t1);
  polyveck_power2round(&t1, &t0, &t1);
  pack_pk(pk, rho, &t1);


  shake256(tr, 48, pk, (32 + 4*320));
  pack_sk(sk, rho, tr, key, &t0, &s1, &s2);

  return 0;
}
# 80 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
int crypto_sign_signature(uint8_t *sig,
                          size_t *siglen,
                          const uint8_t *m,
                          size_t mlen,
                          const uint8_t *sk)
{
  unsigned int n;
  uint8_t seedbuf[2*32 + 3*48];
  uint8_t *rho, *tr, *key, *mu, *rhoprime;
  uint16_t nonce = 0;
  polyvecl mat[4], s1, y, z;
  polyveck t0, s2, w1, w0, h;
  poly cp;
  keccak_state state;

  rho = seedbuf;
  tr = rho + 32;
  key = tr + 48;
  mu = key + 32;
  rhoprime = mu + 48;
  unpack_sk(rho, tr, key, &t0, &s1, &s2, sk);


  shake256_init(&state);
  shake256_absorb(&state, tr, 48);
  shake256_absorb(&state, m, mlen);
  shake256_finalize(&state);
  shake256_squeeze(mu, 48, &state);




  shake256(rhoprime, 48, key, 32 + 48);



  polyvec_matrix_expand(mat, rho);
  polyvecl_ntt(&s1);
  polyveck_ntt(&s2);
  polyveck_ntt(&t0);

rej:

  polyvecl_uniform_gamma1(&y, rhoprime, nonce++);
  z = y;
  polyvecl_ntt(&z);


  polyvec_matrix_pointwise_montgomery(&w1, mat, &z);
  polyveck_reduce(&w1);
  polyveck_invntt_tomont(&w1);


  polyveck_caddq(&w1);
  polyveck_decompose(&w1, &w0, &w1);
  polyveck_pack_w1(sig, &w1);

  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, sig, 4*192);
  shake256_finalize(&state);
  shake256_squeeze(sig, 32, &state);
  poly_challenge(&cp, sig);
  poly_ntt(&cp);


  polyvecl_pointwise_poly_montgomery(&z, &cp, &s1);
  polyvecl_invntt_tomont(&z);
  polyvecl_add(&z, &z, &y);
  polyvecl_reduce(&z);
  if(polyvecl_chknorm(&z, (1 << 17) - 78))
    goto rej;



  polyveck_pointwise_poly_montgomery(&h, &cp, &s2);
  polyveck_invntt_tomont(&h);
  polyveck_sub(&w0, &w0, &h);
  polyveck_reduce(&w0);
  if(polyveck_chknorm(&w0, ((8380417 -1)/88) - 78))
    goto rej;


  polyveck_pointwise_poly_montgomery(&h, &cp, &t0);
  polyveck_invntt_tomont(&h);
  polyveck_reduce(&h);
  if(polyveck_chknorm(&h, ((8380417 -1)/88)))
    goto rej;

  polyveck_add(&w0, &w0, &h);
  polyveck_caddq(&w0);
  n = polyveck_make_hint(&h, &w0, &w1);
  if(n > 80)
    goto rej;


  pack_sig(sig, sig, &z, &h);
  *siglen = (32 + 4*576 + (80 + 4));
  return 0;
}
# 197 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
int crypto_sign(uint8_t sm[3300+(32 + 4*576 + (80 + 4))],
                size_t *smlen,
                const uint8_t m[3300],
                size_t mlen,
                const uint8_t sk[(2*32 + 48 + 4*96 + 4*96 + 4*416)])
{

   size_t i;

   for(i = 0; i < mlen; ++i){
#pragma HLS unroll factor = 2
 sm[(32 + 4*576 + (80 + 4)) + mlen - 1 - i] = m[mlen - 1 - i];
   }

   crypto_sign_signature(sm, smlen, sm + (32 + 4*576 + (80 + 4)), mlen, sk);
   *smlen += mlen;
   return 0;
}
# 229 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
int crypto_sign_verify(const uint8_t *sig,
                       size_t siglen,
                       const uint8_t *m,
                       size_t mlen,
                       const uint8_t *pk)
{
  unsigned int i;
  uint8_t buf[4*192];
  uint8_t rho[32];
  uint8_t mu[48];
  uint8_t c[32];
  uint8_t c2[32];
  poly cp;
  polyvecl mat[4], z;
  polyveck t1, w1, h;
  keccak_state state;

  if(siglen != (32 + 4*576 + (80 + 4)))
    return -1;

  unpack_pk(rho, &t1, pk);
  if(unpack_sig(c, &z, &h, sig))
    return -1;
  if(polyvecl_chknorm(&z, (1 << 17) - 78))
    return -1;


  shake256(mu, 48, pk, (32 + 4*320));
  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, m, mlen);
  shake256_finalize(&state);
  shake256_squeeze(mu, 48, &state);


  poly_challenge(&cp, c);
  polyvec_matrix_expand(mat, rho);

  polyvecl_ntt(&z);
  polyvec_matrix_pointwise_montgomery(&w1, mat, &z);

  poly_ntt(&cp);
  polyveck_shiftl(&t1);
  polyveck_ntt(&t1);
  polyveck_pointwise_poly_montgomery(&t1, &cp, &t1);

  polyveck_sub(&w1, &w1, &t1);
  polyveck_reduce(&w1);
  polyveck_invntt_tomont(&w1);


  polyveck_caddq(&w1);
  polyveck_use_hint(&w1, &w1, &h);
  polyveck_pack_w1(buf, &w1);


  shake256_init(&state);
  shake256_absorb(&state, mu, 48);
  shake256_absorb(&state, buf, 4*192);
  shake256_finalize(&state);
  shake256_squeeze(c2, 32, &state);
  for(i = 0; i < 32; ++i){
   if(c[i] != c2[i])
      return -1;
  }

  return 0;
}
# 312 "/home/guest/Documents/vlsi_2/time/cur/dilithium2/sign.c"
int crypto_sign_open(uint8_t *m,
                     size_t *mlen,
                     const uint8_t *sm,
                     size_t smlen,
                     const uint8_t *pk)
{
  size_t i;

  if(smlen < (32 + 4*576 + (80 + 4)))
    goto badsig;

  *mlen = smlen - (32 + 4*576 + (80 + 4));
  if(crypto_sign_verify(sm, (32 + 4*576 + (80 + 4)), sm + (32 + 4*576 + (80 + 4)), *mlen, pk))
    goto badsig;
  else {

    for(i = 0; i < *mlen; ++i)
      m[i] = sm[(32 + 4*576 + (80 + 4)) + i];
    return 0;
  }

badsig:

  *mlen = -1;
  for(i = 0; i < smlen; ++i)
    m[i] = 0;

  return -1;
}

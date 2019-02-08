/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __AEAD_Poly1305_64_H
#define __AEAD_Poly1305_64_H


#include "FStar.h"
#include "testlib.h"

typedef uint64_t Hacl_Bignum_Constants_limb;

typedef FStar_UInt128_uint128 Hacl_Bignum_Constants_wide;

typedef FStar_UInt128_uint128 Hacl_Bignum_Wide_t;

typedef uint64_t Hacl_Bignum_Limb_t;

typedef void *Hacl_Impl_Poly1305_64_State_log_t;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_uint8_p;

typedef uint64_t *Hacl_Impl_Poly1305_64_State_bigint;

typedef void *Hacl_Impl_Poly1305_64_State_seqelem;

typedef uint64_t *Hacl_Impl_Poly1305_64_State_elemB;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_wordB;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_wordB_16;

typedef struct 
{
  uint64_t *r;
  uint64_t *h;
}
Hacl_Impl_Poly1305_64_State_poly1305_state;

typedef void *Hacl_Impl_Poly1305_64_log_t;

typedef uint64_t *Hacl_Impl_Poly1305_64_bigint;

typedef uint8_t *Hacl_Impl_Poly1305_64_uint8_p;

typedef uint64_t *Hacl_Impl_Poly1305_64_elemB;

typedef uint8_t *Hacl_Impl_Poly1305_64_wordB;

typedef uint8_t *Hacl_Impl_Poly1305_64_wordB_16;

typedef uint8_t *AEAD_Poly1305_64_uint8_p;

typedef uint8_t *AEAD_Poly1305_64_key;

Prims_nat AEAD_Poly1305_64_seval(void *b);

Prims_int AEAD_Poly1305_64_selem(void *s);

typedef Hacl_Impl_Poly1305_64_State_poly1305_state AEAD_Poly1305_64_state;

void
AEAD_Poly1305_64_mk_state(
  uint64_t *r,
  uint64_t *acc,
  Hacl_Impl_Poly1305_64_State_poly1305_state *ret
);

uint32_t AEAD_Poly1305_64_mul_div_16(uint32_t len1);

void
AEAD_Poly1305_64_pad_last(
  Hacl_Impl_Poly1305_64_State_poly1305_state *st,
  uint8_t *input,
  uint32_t len1
);

void
AEAD_Poly1305_64_poly1305_blocks_init(
  Hacl_Impl_Poly1305_64_State_poly1305_state *st,
  uint8_t *input,
  uint32_t len1,
  uint8_t *k1
);

void
AEAD_Poly1305_64_poly1305_blocks_continue(
  Hacl_Impl_Poly1305_64_State_poly1305_state *st,
  uint8_t *input,
  uint32_t len1
);

void
AEAD_Poly1305_64_poly1305_blocks_finish_(
  Hacl_Impl_Poly1305_64_State_poly1305_state *st,
  uint8_t *input
);

void
AEAD_Poly1305_64_poly1305_blocks_finish(
  Hacl_Impl_Poly1305_64_State_poly1305_state *st,
  uint8_t *input,
  uint8_t *mac,
  uint8_t *key_s
);
#endif
#include "crypto_hash.h"
#include "sph_sha2.h"
  
int crypto_hash(unsigned char *out,const unsigned char *in,unsigned long long inlen)
{
  sph_sha256_context mc;
  sph_sha256_init(&mc);
  sph_sha256(&mc, in, inlen);
  sph_sha256_close(&mc,out);
  return 0;
}
      

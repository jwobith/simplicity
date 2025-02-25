#include "schnorr0.h"

/* A length-prefixed encoding of the following Simplicity program:
 *     (scribe (toWord256 0xF9308A019258C31049344F85F89D5229B531C845836F99B08601F113BCE036F9) &&&
 *      zero word256) &&&
 *      witness (toWord512 0xE907831F80848D1069A5371B402410364BDF1C5F8307B0084C55F1CE2DCA821525F66A4A85EA8B71E482A74F382D2CE5EBEEE8FDB2172F477DF4900D310536C0) >>>
 *     Simplicity.Programs.LibSecp256k1.Lib.bip_0340_verify
 * with jets.
 */
const unsigned char schnorr0[] = {
  0xe4, 0xe2, 0x4a, 0x10, 0x20, 0x98, 0x0b, 0x00, 0xa6, 0x22, 0x81, 0x62, 0x16, 0x38, 0x89, 0xa0, 0x52, 0x0a, 0x05, 0x88,
  0x5a, 0x71, 0x16, 0xad, 0x42, 0x81, 0x68, 0xd6, 0x2c, 0xc2, 0xa1, 0x66, 0x16, 0xce, 0x00, 0x2d, 0xe1, 0x70, 0x1e, 0x02,
  0x26, 0xa1, 0x50, 0xb8, 0x47, 0x01, 0x13, 0x80, 0x8b, 0x5f, 0x01, 0x14, 0x0b, 0x10, 0xb5, 0x85, 0xc2, 0xb8, 0x38, 0x9c,
  0x28, 0x5c, 0x22, 0x0a, 0x05, 0x87, 0x10, 0x8b, 0x83, 0xee, 0x14, 0x0b, 0x00, 0xb8, 0x97, 0x85, 0x0b, 0x89, 0xf8, 0x8c,
  0x5c, 0x46, 0x15, 0x0b, 0x82, 0xf0, 0x71, 0x70, 0x8e, 0x26, 0x14, 0x0b, 0x00, 0xb4, 0x85, 0xc0, 0x82, 0xe2, 0xde, 0x30,
  0x13, 0x86, 0x0b, 0x8a, 0xb8, 0x8c, 0x50, 0x2e, 0x19, 0xc5, 0x02, 0xe0, 0xfc, 0x40, 0x28, 0x16, 0x01, 0x71, 0x67, 0x18,
  0x0b, 0x8d, 0x78, 0xd8, 0x4e, 0x39, 0x15, 0x0b, 0x8d, 0xf8, 0xdc, 0x5b, 0x78, 0xd0, 0x50, 0x2c, 0x02, 0xd2, 0x17, 0x1a,
  0xe8, 0x13, 0x8c, 0x85, 0xc8, 0x2e, 0x34, 0x17, 0x1a, 0xf1, 0xe0, 0xa0, 0x58, 0x05, 0xc1, 0xf8, 0xbc, 0x5c, 0x88, 0xe4,
  0x28, 0x9c, 0x80, 0x15, 0x0b, 0x90, 0x7c, 0x08, 0x4e, 0x43, 0x0a, 0x85, 0xa0, 0x2d, 0xe1, 0x71, 0x0b, 0x18, 0x88, 0x10,
  0x20, 0x58, 0x9c, 0x51, 0xb1, 0x02, 0x3d, 0x20, 0x0e, 0x90, 0x78, 0x31, 0xf8, 0x08, 0x48, 0xd1, 0x06, 0x9a, 0x53, 0x71,
  0xb4, 0x02, 0x41, 0x03, 0x64, 0xbd, 0xf1, 0xc5, 0xf8, 0x30, 0x7b, 0x00, 0x84, 0xc5, 0x5f, 0x1c, 0xe2, 0xdc, 0xa8, 0x21,
  0x52, 0x5f, 0x66, 0xa4, 0xa8, 0x5e, 0xa8, 0xb7, 0x1e, 0x48, 0x2a, 0x74, 0xf3, 0x82, 0xd2, 0xce, 0x5e, 0xbe, 0xee, 0x8f,
  0xdb, 0x21, 0x72, 0xf4, 0x77, 0xdf, 0x49, 0x00, 0xd3, 0x10, 0x53, 0x6c, 0x00
};

const size_t sizeof_schnorr0 = sizeof(schnorr0);

/* The commitment Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_cmr[] = {
  0x1778633au, 0x0fd8b788u, 0x7cfa7884u, 0xe4e0442eu, 0x10b72b78u, 0x34403037u, 0x75a3539eu, 0xd186e722u
};

/* The identity Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_imr[] = {
  0xc450bb1du, 0x4b0180fbu, 0x676b0372u, 0xaff39877u, 0x567097c1u, 0x6677bdc3u, 0x99d195fcu, 0xaa4c6ee1u
};

/* The annotated Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_amr[] = {
  0x7882912bu, 0xed4a4c5cu, 0x21909cdau, 0x69577136u, 0xd6eac670u, 0xd82dc5e6u, 0xa9eb5908u, 0x79cbd114u
};

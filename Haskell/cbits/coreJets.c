#include "jets.h"

#define COREWRAP_(jet)                                                                                                            \
bool c_##jet(frameItem* dst, const frameItem* src) {                                                                          \
  return jet(dst, *src, NULL);                                                                                                \
}

COREWRAP_(add_32)
COREWRAP_(full_add_32)
COREWRAP_(subtract_32)
COREWRAP_(full_subtract_32)
COREWRAP_(multiply_32)
COREWRAP_(full_multiply_32)

COREWRAP_(sha_256_block)

COREWRAP_(fe_normalize)
COREWRAP_(fe_negate)
COREWRAP_(fe_add)
COREWRAP_(fe_square)
COREWRAP_(fe_multiply)
COREWRAP_(fe_multiply_beta)
COREWRAP_(fe_invert)
COREWRAP_(fe_square_root)
COREWRAP_(fe_is_zero)
COREWRAP_(fe_is_odd)
COREWRAP_(scalar_normalize)
COREWRAP_(scalar_negate)
COREWRAP_(scalar_add)
COREWRAP_(scalar_square)
COREWRAP_(scalar_multiply)
COREWRAP_(scalar_multiply_lambda)
COREWRAP_(scalar_invert)
COREWRAP_(scalar_is_zero)
COREWRAP_(gej_infinity)
COREWRAP_(gej_rescale)
COREWRAP_(gej_normalize)
COREWRAP_(gej_negate)
COREWRAP_(ge_negate)
COREWRAP_(gej_double)
COREWRAP_(gej_add)
COREWRAP_(gej_ge_add_ex)
COREWRAP_(gej_ge_add)
COREWRAP_(gej_is_infinity)
COREWRAP_(gej_x_equiv)
COREWRAP_(gej_y_is_odd)
COREWRAP_(gej_is_on_curve)
COREWRAP_(ge_is_on_curve)
COREWRAP_(scale)
COREWRAP_(generate)
COREWRAP_(linear_combination_1)
COREWRAP_(linear_verify_1)
COREWRAP_(decompress)
COREWRAP_(point_verify_1)
COREWRAP_(bip_0340_verify)
COREWRAP_(parse_lock)
COREWRAP_(parse_sequence)

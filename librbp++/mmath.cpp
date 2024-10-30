#include <gmp.h> /* header works in C++ too */
#include "mmath.h"

using namespace rbp;

/* Number of different ways to choose $k$ from $n$, i.e. the
 * binomial coefficient (k n) */
unsigned long rbp::combinations(unsigned long n, unsigned long k) {
    mpz_t integ;
    unsigned long int combs;

    mpz_init(integ);
    mpz_bin_uiui(integ, n, k);

    combs = mpz_get_ui(integ);
    mpz_clear(integ);
    return combs;
}

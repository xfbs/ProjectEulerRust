
#include "solve.h"
#include <euler/test.h>
#include <euler/vec.h>

void test_weight() {
  assert(weight("COLIN") == 53);
  assert(weight("A") == 1);
  assert(weight("Z") == 26);
  assert(weight("AY") == 26);
}

void test_solve_022() {
  vecp_t v = vecp_new(0, NULL);
  vec_push(&v, "A");
  vec_push(&v, "Z");
  vec_push(&v, "COLIN");

  assert(solve_022(&v) == (1 * 1 + 2 * 53 + 3 * 26));
  vec_free(&v);
}


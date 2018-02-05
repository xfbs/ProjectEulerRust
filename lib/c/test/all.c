// file: all.c
// autogenerated from *_test.c in test/ by all.rb
// don't modify this file - it will be overwritten
// this script assumes it's begin ran from within the test/ directory
#define EULER_TEST_MAIN
#include <euler/test.h>

void test_collatz();
void doctest_map_new();
void doctest_map_hash_str();
void doctest_map_get();
void doctest_map_add();
void doctest_map_set();
void doctest_map_has();
void doctest_map_len();
void doctest_map_del();
void doctest_math_lcm();
void doctest_math_gcd();
void doctest_math_factorial();
void doctest_math_divisor_sum();
void doctest_math_is_palindrome();
void doctest_math_fibonacci();
void doctest_modular_arithmetic_sum_mod();
void doctest_modular_arithmetic_mult_mod();
void doctest_modular_arithmetic_shift_mod();
void doctest_prime_new();
void doctest_prime_free();
void doctest_prime_nth();
void doctest_prime_which();
void doctest_prime_check();
void doctest_prime_below();
void doctest_vec_free_1();
void doctest_vec_free_2();
void doctest_vec_get_1();
void doctest_vec_get_2();
void doctest_vec_set_1();
void doctest_vec_set_2();
void doctest_vec_len();
void doctest_vec_push();
void doctest_vec_reserve();
void doctest_vec_clear();
void doctest_vec_index();
void doctest_vec_sum();
void doctest_vec16_new_1();
void doctest_vec16_new_2();
void doctest_vec16_alloc_1();
void doctest_vec16_alloc_2();
void doctest_vec16_free_1();
void doctest_vec16_free_2();
void doctest_vec16_get_1();
void doctest_vec16_get_2();
void doctest_vec16_set_1();
void doctest_vec16_set_2();
void doctest_vec16_len();
void doctest_vec16_push();
void doctest_vec16_reserve();
void doctest_vec16_clear();
void doctest_vec16_index();
void doctest_vec16_bsearch();
void doctest_vec16_sort();
void doctest_vec16_sum();
void doctest_vec32_new_1();
void doctest_vec32_new_2();
void doctest_vec32_alloc_1();
void doctest_vec32_alloc_2();
void doctest_vec32_free_1();
void doctest_vec32_free_2();
void doctest_vec32_get_1();
void doctest_vec32_get_2();
void doctest_vec32_set_1();
void doctest_vec32_set_2();
void doctest_vec32_len();
void doctest_vec32_push();
void doctest_vec32_reserve();
void doctest_vec32_clear();
void doctest_vec32_index();
void doctest_vec32_bsearch();
void doctest_vec32_sort();
void doctest_vec32_sum();
void doctest_vec64_new_1();
void doctest_vec64_new_2();
void doctest_vec64_alloc_1();
void doctest_vec64_alloc_2();
void doctest_vec64_free_1();
void doctest_vec64_free_2();
void doctest_vec64_get_1();
void doctest_vec64_get_2();
void doctest_vec64_set_1();
void doctest_vec64_set_2();
void doctest_vec64_len();
void doctest_vec64_push();
void doctest_vec64_reserve();
void doctest_vec64_clear();
void doctest_vec64_index();
void doctest_vec64_bsearch();
void doctest_vec64_sort();
void doctest_vec64_sum();
void doctest_vec8_new_1();
void doctest_vec8_new_2();
void doctest_vec8_alloc_1();
void doctest_vec8_alloc_2();
void doctest_vec8_free_1();
void doctest_vec8_free_2();
void doctest_vec8_get_1();
void doctest_vec8_get_2();
void doctest_vec8_set_1();
void doctest_vec8_set_2();
void doctest_vec8_len();
void doctest_vec8_push();
void doctest_vec8_reserve();
void doctest_vec8_clear();
void doctest_vec8_index();
void doctest_vec8_bsearch();
void doctest_vec8_sort();
void doctest_vec8_sum();
void doctest_vecp_new_1();
void doctest_vecp_new_2();
void doctest_vecp_alloc_1();
void doctest_vecp_alloc_2();
void doctest_vecp_free_1();
void doctest_vecp_free_2();
void doctest_vecp_get_1();
void doctest_vecp_get_2();
void doctest_vecp_set_1();
void doctest_vecp_set_2();
void doctest_vecp_len();
void doctest_vecp_push();
void doctest_vecp_reserve();
void doctest_vecp_clear();
void doctest_vecp_index();
void doctest_vecp_lsearch();
void doctest_vecp_bsearch_1();
void doctest_vecp_bsearch_2();
void doctest_vecp_sort_1();
void doctest_vecp_sort_2();
void test_lcm();
void test_gcd();
void test_factorial();
void test_speed();
void test_overflow();
void test_divisor_sum();
void test_fibos();
void test_nth_pandigital();
void test_palin();
void test_shift_mod();
void test_mult_mod();
void test_pow_mod();
void test_sum_mod();
void test_prime_new();
void test_prime_free();
void test_prime_nth();
void test_prime_which();
void test_prime_check();
void test_prime_below();
void test_sieve_new();
void test_sieve_nth();
void test_sieve_which();
void test_sieve_check();
void test_sieve_below();
void test_vec16_new();
void test_vec16_get();
void test_vec16_set();
void test_vec16_push();
void test_vec16_len();
void test_vec32_new();
void test_vec64_new();
void test_vec8_new();
void test_vec8_get();
void test_vec8_set();
void test_vec8_push();
void test_vec8_len();
void test_vecp_new();
void test_vecp_get();
void test_vecp_get_generic();
void test_vecp_set();
void test_vecp_set_generic();
void test_vecp_push();
void test_vecp_push_generic();
void test_vecp_len();
void test_vecp_len_generic();

TESTS() {
  RUN(test_collatz);
  RUN(doctest_map_new);
  RUN(doctest_map_hash_str);
  RUN(doctest_map_get);
  RUN(doctest_map_add);
  RUN(doctest_map_set);
  RUN(doctest_map_has);
  RUN(doctest_map_len);
  RUN(doctest_map_del);
  RUN(doctest_math_lcm);
  RUN(doctest_math_gcd);
  RUN(doctest_math_factorial);
  RUN(doctest_math_divisor_sum);
  RUN(doctest_math_is_palindrome);
  RUN(doctest_math_fibonacci);
  RUN(doctest_modular_arithmetic_sum_mod);
  RUN(doctest_modular_arithmetic_mult_mod);
  RUN(doctest_modular_arithmetic_shift_mod);
  RUN(doctest_prime_new);
  RUN(doctest_prime_free);
  RUN(doctest_prime_nth);
  RUN(doctest_prime_which);
  RUN(doctest_prime_check);
  RUN(doctest_prime_below);
  RUN(doctest_vec_free_1);
  RUN(doctest_vec_free_2);
  RUN(doctest_vec_get_1);
  RUN(doctest_vec_get_2);
  RUN(doctest_vec_set_1);
  RUN(doctest_vec_set_2);
  RUN(doctest_vec_len);
  RUN(doctest_vec_push);
  RUN(doctest_vec_reserve);
  RUN(doctest_vec_clear);
  RUN(doctest_vec_index);
  RUN(doctest_vec_sum);
  RUN(doctest_vec16_new_1);
  RUN(doctest_vec16_new_2);
  RUN(doctest_vec16_alloc_1);
  RUN(doctest_vec16_alloc_2);
  RUN(doctest_vec16_free_1);
  RUN(doctest_vec16_free_2);
  RUN(doctest_vec16_get_1);
  RUN(doctest_vec16_get_2);
  RUN(doctest_vec16_set_1);
  RUN(doctest_vec16_set_2);
  RUN(doctest_vec16_len);
  RUN(doctest_vec16_push);
  RUN(doctest_vec16_reserve);
  RUN(doctest_vec16_clear);
  RUN(doctest_vec16_index);
  RUN(doctest_vec16_bsearch);
  RUN(doctest_vec16_sort);
  RUN(doctest_vec16_sum);
  RUN(doctest_vec32_new_1);
  RUN(doctest_vec32_new_2);
  RUN(doctest_vec32_alloc_1);
  RUN(doctest_vec32_alloc_2);
  RUN(doctest_vec32_free_1);
  RUN(doctest_vec32_free_2);
  RUN(doctest_vec32_get_1);
  RUN(doctest_vec32_get_2);
  RUN(doctest_vec32_set_1);
  RUN(doctest_vec32_set_2);
  RUN(doctest_vec32_len);
  RUN(doctest_vec32_push);
  RUN(doctest_vec32_reserve);
  RUN(doctest_vec32_clear);
  RUN(doctest_vec32_index);
  RUN(doctest_vec32_bsearch);
  RUN(doctest_vec32_sort);
  RUN(doctest_vec32_sum);
  RUN(doctest_vec64_new_1);
  RUN(doctest_vec64_new_2);
  RUN(doctest_vec64_alloc_1);
  RUN(doctest_vec64_alloc_2);
  RUN(doctest_vec64_free_1);
  RUN(doctest_vec64_free_2);
  RUN(doctest_vec64_get_1);
  RUN(doctest_vec64_get_2);
  RUN(doctest_vec64_set_1);
  RUN(doctest_vec64_set_2);
  RUN(doctest_vec64_len);
  RUN(doctest_vec64_push);
  RUN(doctest_vec64_reserve);
  RUN(doctest_vec64_clear);
  RUN(doctest_vec64_index);
  RUN(doctest_vec64_bsearch);
  RUN(doctest_vec64_sort);
  RUN(doctest_vec64_sum);
  RUN(doctest_vec8_new_1);
  RUN(doctest_vec8_new_2);
  RUN(doctest_vec8_alloc_1);
  RUN(doctest_vec8_alloc_2);
  RUN(doctest_vec8_free_1);
  RUN(doctest_vec8_free_2);
  RUN(doctest_vec8_get_1);
  RUN(doctest_vec8_get_2);
  RUN(doctest_vec8_set_1);
  RUN(doctest_vec8_set_2);
  RUN(doctest_vec8_len);
  RUN(doctest_vec8_push);
  RUN(doctest_vec8_reserve);
  RUN(doctest_vec8_clear);
  RUN(doctest_vec8_index);
  RUN(doctest_vec8_bsearch);
  RUN(doctest_vec8_sort);
  RUN(doctest_vec8_sum);
  RUN(doctest_vecp_new_1);
  RUN(doctest_vecp_new_2);
  RUN(doctest_vecp_alloc_1);
  RUN(doctest_vecp_alloc_2);
  RUN(doctest_vecp_free_1);
  RUN(doctest_vecp_free_2);
  RUN(doctest_vecp_get_1);
  RUN(doctest_vecp_get_2);
  RUN(doctest_vecp_set_1);
  RUN(doctest_vecp_set_2);
  RUN(doctest_vecp_len);
  RUN(doctest_vecp_push);
  RUN(doctest_vecp_reserve);
  RUN(doctest_vecp_clear);
  RUN(doctest_vecp_index);
  RUN(doctest_vecp_lsearch);
  RUN(doctest_vecp_bsearch_1);
  RUN(doctest_vecp_bsearch_2);
  RUN(doctest_vecp_sort_1);
  RUN(doctest_vecp_sort_2);
  RUN(test_lcm);
  RUN(test_gcd);
  RUN(test_factorial);
  RUN(test_speed);
  RUN(test_overflow);
  RUN(test_divisor_sum);
  RUN(test_fibos);
  RUN(test_nth_pandigital);
  RUN(test_palin);
  RUN(test_shift_mod);
  RUN(test_mult_mod);
  RUN(test_pow_mod);
  RUN(test_sum_mod);
  RUN(test_prime_new);
  RUN(test_prime_free);
  RUN(test_prime_nth);
  RUN(test_prime_which);
  RUN(test_prime_check);
  RUN(test_prime_below);
  RUN(test_sieve_new);
  RUN(test_sieve_nth);
  RUN(test_sieve_which);
  RUN(test_sieve_check);
  RUN(test_sieve_below);
  RUN(test_vec16_new);
  RUN(test_vec16_get);
  RUN(test_vec16_set);
  RUN(test_vec16_push);
  RUN(test_vec16_len);
  RUN(test_vec32_new);
  RUN(test_vec64_new);
  RUN(test_vec8_new);
  RUN(test_vec8_get);
  RUN(test_vec8_set);
  RUN(test_vec8_push);
  RUN(test_vec8_len);
  RUN(test_vecp_new);
  RUN(test_vecp_get);
  RUN(test_vecp_get_generic);
  RUN(test_vecp_set);
  RUN(test_vecp_set_generic);
  RUN(test_vecp_push);
  RUN(test_vecp_push_generic);
  RUN(test_vecp_len);
  RUN(test_vecp_len_generic);
}

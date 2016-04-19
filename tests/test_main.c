#include <stdlib.h>
#include <stdbool.h>
#include <check.h>

START_TEST(first_test)
{
  ck_assert(true);
}
END_TEST

Suite * suite(void)
{
  Suite *s;
  TCase *tc_core;

  s = suite_create("Suit");

  tc_core = tcase_create("main");

  tcase_add_test(tc_core, first_test);
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void)
{
  int number_failed;
  SRunner *sr;

  sr = srunner_create(suite());

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

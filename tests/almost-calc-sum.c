/*
 * Author: Luka Perkov <luka.perkov@sartura.hr>
 *
 * almost-calc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "../src/almost-calc.h"

static void torture_sum_1_1(void **state) {
	assert_int_equal(sum(1, 1), 2);
}

static void torture_sum_1_2(void **state) {
	assert_int_equal(sum(1, 2), 3);
}

static void torture_sum_3_5(void **state) {
	assert_int_equal(sum(3, 5), 8);
}

int main(void) {
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(torture_sum_1_1),
		cmocka_unit_test(torture_sum_1_2),
		cmocka_unit_test(torture_sum_3_5),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}

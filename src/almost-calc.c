/*
 * Author: Luka Perkov <luka.perkov@sartura.hr>
 *
 * almost-calc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

#include <stdio.h>

#include "almost-calc.h"

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int main(int argc, char **argv)
{
	int a = 4;
	int b = 2;

	printf("%d + %d = %d\n", a, b, sum(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));

	return 0;
}

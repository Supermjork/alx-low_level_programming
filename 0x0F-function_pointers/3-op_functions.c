#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * op_add - addition
 *
 * @a: n0
 * @b: n1
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: n0
 * @b: n1
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: n0
 * @b: n1
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: n0
 * @b: n1
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: n0
 * @b: n1
 *
 * Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

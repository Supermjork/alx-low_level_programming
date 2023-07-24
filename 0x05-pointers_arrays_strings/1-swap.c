#include "main.h"

/**
 * swap_int - swaps two given integers
 *
 * @num0: passed pointer to first number
 * @num1: passed pointer to second number
 *
 * Return: void
 */

void swap_int(int *num0, int *num1)
{
	/* Assign the value of num1 into tmp */
	int tmp;

	tmp = *num0;

	/* Swaperoo */
	*num0 = *num1;
	*num1 = tmp;
}

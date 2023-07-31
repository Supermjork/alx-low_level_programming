#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of both diagonals in matrix
 *
 * @mat: array of values
 *
 * Return: void
 */

void print_diagsums(int *mat, int size)
{
	int main_diag, sec_diag, idx;

	for (idx = 0; idx < size; idx++)
	{
		main_diag += *(*(mat + idx) + idx);
	}

	for (idx = 0; idx <= size; idx++)
	{
		sec_diag += *(*(mat + idx) + size - idx);
	}

	printf("%d, %d\n", main_diag, sec_diag);
}

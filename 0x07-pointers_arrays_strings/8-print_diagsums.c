#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of both diagonals in matrix
 *
 * @mat: array of values
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *mat, int size)
{
	int main_diag, sec_diag, idx;

	main_diag = 0;
	sec_diag = 0;

	for (idx = 0; idx < size; idx++)
	{
		/* Multiplying size by index, jumps rows */
		main_diag += mat[idx * size + idx];
	}

	for (idx = size - 1; idx >= 0; idx--)
	{
		sec_diag += mat[idx * size + (size - idx - 1)];
	}

	printf("%d, %d\n", main_diag, sec_diag);
}

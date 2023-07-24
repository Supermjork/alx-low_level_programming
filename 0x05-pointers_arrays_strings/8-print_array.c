#include "main.h"

/**
 * print_array - prints specific n elements from array
 *
 * @array: given array
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *array, int n)
{
	int elm;

	for (elm = 0; elm < n; elm++)
	{
		printf("%d", *(array + elm));
		if (elm != n - 1)
			printf(", ");
	}

	printf("\n");
}

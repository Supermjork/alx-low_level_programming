#include "main.h"

/**
 * reverse_array - reverses passed array
 *
 * @array: passed array to be reversed
 * @n: number of elements to be reversed
 *
 * Return: void
 */

void reverse_array(int *array, int n)
{
	int ptr, tmp;

	for (ptr = 0; ptr < n; ptr++)
	{
		tmp = *(array + n - 1);
		*(array + n - 1) = *(array + ptr);
		*(array + ptr) = tmp;
		n--;
	}
}

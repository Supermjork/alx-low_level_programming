#include "main.h"
#include<stlib.h>

/**
 * create_array - Allocates an contiguos area of memory and fills with a char
 *
 * @size: size of array
 * @c: character to fill with
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr_head;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	arr_head = (char *) malloc(size * sizeof(char));

	if (arr_head == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		*(arr_head + idx) = c;

	return (arr_head);
}

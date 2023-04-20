#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 *@array: a pointer to an array of integers.
 *@size: size of the array.
 *@cmp: a pointer to a function.
 *
 *Return: -1, if no element matches or if the size is <= 0.
 *the index of the first element for which the cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int result, i = 0;

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		result = cmp(array[i]);

		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (-1);
}

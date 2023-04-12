#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 *
 *@size: size of the array
 *@c: specific character.
 * Return: NULL if size = 0, or a pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	int i;

	char *array;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);

}

#include "main.h"
/**
 * set_bit - sets the value to 1 at given index
 * @n: a number
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > 64)
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}

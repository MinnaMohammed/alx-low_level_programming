#include "main.h"
/**
 * clear_bit - sets the value to 0 at given index
 * @n: a number
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > 64)
		return (-1);
	clear = 1 << index;
  clear = ~clear;
	*n = *n & clear;
	return (1);
}

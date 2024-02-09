#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: a number
 * @index: the index of the returned bit
 * Return: the value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

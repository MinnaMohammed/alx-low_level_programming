#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b);
	unsigned int sum = 0;
	int s = 0;

	if (b == NULL)
		return (0);
	if (b[0] == '1')
		return (1);
	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		sum = sum + (b[i] + '0');
		sum = sum * (2 ^ s);
		i--;
		s++;

	}
	return (sum);

}

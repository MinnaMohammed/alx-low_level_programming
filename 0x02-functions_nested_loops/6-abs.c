#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *@n: input number. 
 * Return: result number n.
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = 0 - n;
	}

	return (n);
}

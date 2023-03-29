#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half -  print the second half of the string
 *@str: input string
*/
void puts_half(char *str)
{
	int i;

	int length = strlen(str);

	if (length % 2 != 0)
	{
		length = (length - 1) / 2;
	}
	else
	{
		length = length / 2;
	}


	for (i = length; i < (int)strlen(str) - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

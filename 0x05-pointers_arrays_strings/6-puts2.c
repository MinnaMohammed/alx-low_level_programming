#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *@str: input string
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
}

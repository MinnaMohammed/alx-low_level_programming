#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *@str: input string
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}

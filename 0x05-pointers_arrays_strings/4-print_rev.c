#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: input string
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) / 2; i < 0; i++)
	{
		_putchar(i);
	}
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *@str: pointer to the input string.
 * Return: pointer to the result string (str).
*/
char *cap_string(char *str)
{
	int length = strlen(str);

	int i;

	for (i = 0; i < length; i++)
	{
			str[i + 1] = str[i + 1] - 32;
	}

	return (str);
}

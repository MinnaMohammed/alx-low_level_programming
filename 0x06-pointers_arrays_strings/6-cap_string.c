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

	int i = 0;

	while (str[i] != '\0')
	{
		if (isspace(str[i]))
		{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		}
		i++;
	}

	return (str);
}

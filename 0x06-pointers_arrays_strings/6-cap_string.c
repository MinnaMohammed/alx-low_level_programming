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
		if (i == 0)
		{
		str[0] = str[0] - 32;
		}

		if (str[i] == ' ')
		{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		}
		else if (str[i] == '\n')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

	return (str);
}

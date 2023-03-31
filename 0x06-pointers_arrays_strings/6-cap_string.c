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
		if (i == 0 && (str[0] >= 97 && str[0] <= 122))
		{
		str[0] = str[0] - 32;
		}

		if (str[i] == ' ' || str[i] == '.' || str[i] == '\t')
		{
		if (str[i + 1] >= 97 && str[i + 1] <= 122)
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

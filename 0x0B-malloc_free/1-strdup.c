#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 *@str: a pointer to a string.
 * Return: NULL if str = NULL or a pointer to the
 * duplicated string (on success)
*/
char *_strdup(char *str)
{
	char *newString;

	if (str == NULL)
	{
		return (NULL);
	}

	newString = malloc(strlen(str) * sizeof(char));

	if (newString == NULL)
	{
		return  (NULL);
	}

	for (int i = 0; i < strlen(str); i++)
	{
		newString[i] = str[i];
	}

	return (newString);
}

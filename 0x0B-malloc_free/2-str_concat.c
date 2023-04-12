#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat -  concatenates two strings.
 *@s1: pointer to a string.
 *@s2: pointer to a string.
 *
 * Return: NULL (on failure) or a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int length_of_s1 = strlen(s1);

	int length_of_s2 = strlen(s2);

	int i, j = 0;

	char *new_string;

	new_string = malloc((length_of_s1 + length_of_s2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_of_s1 + length_of_s2 + 1; i++)
	{
		if (i < length_of_s1)
		{
			new_string[i] = s1[i];
		}
		else
		{
			new_string[i] = s2[j];
			j++;
		}
	}
	return (new_string);

}

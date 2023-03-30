#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings.
 *@src: the string that will be appended to the destination string.
 *@dest: destination string.
 * Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int length_of_dest = strlen(dest);

	int length_of_src = strlen(src);

	int i, j = 0;

	for (i = length_of_dest + 1; i < length_of_dest + length_of_src + 2; i++)
	{
		if (dest[i] == length_of_dest + 1)
		{
			dest[i] = '\t';
			continue;
		}
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

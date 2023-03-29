#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *@dest: output string
 *@src: string that is copied
 * Return: new copy of the string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	int length = strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	if (dest[i] == '\0')
	{
		dest[i] = (char *)' ';
	}

return (dest);
}

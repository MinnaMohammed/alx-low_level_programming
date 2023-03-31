#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * leet - encodes a string into 1337.
 *Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 *
 *@str: pointer to the input string.
 * Return: pointer to the  reult string (str).
*/
char *leet(char *str)
{
	int i, j;

	int length = strlen(str);

	char array[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};

	char array2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == array[j])
			{
				str[i] = array2[j];
				break;
			}

		}
	}

	return (str);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 *@b: a pointer to string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if
 *	   there is one or more chars in the string b that is not 0 or 1
 *	   b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int idx = 0, ans = 0;
        int i = 0, cnt = 0;

	if (!b)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		cnt++;
		i++;
	}

	for (i = cnt - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			ans += (1 << idx);
		}
		idx++;
	}
	return (ans);
}

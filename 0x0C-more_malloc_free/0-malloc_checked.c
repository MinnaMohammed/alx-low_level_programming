#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 *@b: input integer
 *Return: Always 0 (Success)
 *
*/
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(int));
}

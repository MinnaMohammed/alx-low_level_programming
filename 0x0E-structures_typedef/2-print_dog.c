#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 *@d: a pointer to a struct
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %d\n", d->age);
                printf("Owner: %s\n", d->owner);
	}
	else if (d->age == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
                printf("Owner: %s\n", d->owner);
	}
	else if (d->owner ==NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

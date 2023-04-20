#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 *
 *@d: instance from the dog struct.
 *@name: given name
 *@age: given age
 *@owner: given owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

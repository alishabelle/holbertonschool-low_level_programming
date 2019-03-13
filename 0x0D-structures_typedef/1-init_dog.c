#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - the function
 *@d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 * Return - the return is void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

		d->name = name;
		d->age = age;
		d->owner = owner;
}

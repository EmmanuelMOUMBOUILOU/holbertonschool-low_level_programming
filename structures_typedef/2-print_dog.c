#include "dog.h"

/**
* print_dog - Displays information about a dog.
* @d: Pointer to the dog structure.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}


#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: an object from struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age ? d->age : "(nil)");
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}

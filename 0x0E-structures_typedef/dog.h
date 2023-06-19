#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: just dog's information struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

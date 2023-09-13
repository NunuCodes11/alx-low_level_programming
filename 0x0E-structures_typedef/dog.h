#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: dog's name
* @age: Age of the day
* @owner: the owner of the dog
*/
#include <stdlib.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

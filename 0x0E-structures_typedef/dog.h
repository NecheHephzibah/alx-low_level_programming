#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure containing information on a dog
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner of the dog
* Return: 0
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
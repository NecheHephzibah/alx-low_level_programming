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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);






void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

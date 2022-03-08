#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct
 * @name: Name of..
 * @age: age of...
 * @owner: Own
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

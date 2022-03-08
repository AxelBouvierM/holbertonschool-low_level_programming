#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct
 * @name: Name of..
 * @age: age of...
 * @owner: Own
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

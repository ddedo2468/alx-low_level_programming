#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defination of a dog as a structure
 * @name: character str
 * @age: int to define dog age
 * @owner: cahr str to define the dog owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

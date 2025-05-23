#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - creates a dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: struct of the dog table
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

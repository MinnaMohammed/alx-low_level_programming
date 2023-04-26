#ifndef dog_h
#define dog_h
/**
 * struct dog - Struct dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

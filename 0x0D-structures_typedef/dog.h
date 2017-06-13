#ifndef DOG_FN
#define DOG_FN
/**
 * struct dog - dog
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 *
 * Description: data structure for each dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

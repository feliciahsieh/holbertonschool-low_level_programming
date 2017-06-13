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
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);

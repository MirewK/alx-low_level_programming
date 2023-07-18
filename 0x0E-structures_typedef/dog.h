#ifndef HEADER
#define HEADER
/**
 * struct dog - define the structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: attributes of structure dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the new type for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

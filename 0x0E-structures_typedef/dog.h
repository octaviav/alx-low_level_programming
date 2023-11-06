#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 * @name - dog name
 * @age - dog age
 * @owner - dog owner
 *
 *dog_t - typedef for struct dog
 */
	struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
typedef struct dog dog_t;
dog_t *my_dog;
dog_t *new_dog(char *name, float age, char *owner);


#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog basic information
 * @name: First member
 * @age: Seconf member
 * @owner: Third member
 *
 * Decription: Longer desciption
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

voi init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

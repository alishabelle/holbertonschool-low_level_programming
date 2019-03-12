#ifndef DOGGO
#define DOGGO
/**
 * struct dog - structure
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

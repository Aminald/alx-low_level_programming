#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the struct dog
 *
 * Description: If an element of d is NULL, print (nil) instead of the element.
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d);
#endif /* DOG_H */

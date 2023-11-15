#include <stdio.h>
#include <stdlib.h>

/**
 * @name: name of the person
 * @age : age personne
 * @owner: variable
 *
 * Return: newDog.
 */

typedef struct {
	char *name;
	float age;
	char *owner;
} dog_t;

void cleanup_and_exit(dog_t *my_dog) {
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	exit(EXIT_FAILURE);
}

size_t custom_strlen(const char *str) {
	size_t len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

dog_t *new_dog(char *name, float age, char *owner);

int main(void) {
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL) {
		printf("Failed to create a new dog\n");
		exit(EXIT_FAILURE);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return 0;
}

dog_t *new_dog(char *name, float age, char *owner) {
	if (name == NULL || owner == NULL) {
		return NULL;
	}

	dog_t *new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL) {
		return NULL;
	}

	size_t name_len = custom_strlen(name);
	new_dog_ptr->name = malloc(name_len + 1);
	if (new_dog_ptr->name == NULL) {
		cleanup_and_exit(new_dog_ptr);
	}

	size_t i;
	for (i = 0; i <= name_len; i++) {
		new_dog_ptr->name[i] = name[i];
	}

	new_dog_ptr->age = age;

	size_t owner_len = custom_strlen(owner);
	new_dog_ptr->owner = malloc(owner_len + 1);
	if (new_dog_ptr->owner == NULL) {
		cleanup_and_exit(new_dog_ptr);
	}

	for (i = 0; i <= owner_len; i++) {
		new_dog_ptr->owner[i] = owner[i];
	}

	return new_dog_ptr;
}

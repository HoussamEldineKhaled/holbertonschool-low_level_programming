#include "dog.h"
#include <stdlib.h>
/**
 * find_length - length of string
 * @str: string
 * Return: length of str
*/
int find_length(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
/**
 * str_copy - copy string in memory
 * @str: input string
 * Return: NULL or new str
*/
char *str_copy(char *str)
{
char *newstr;
int i, length;
if (str == NULL)
{
return (NULL);
}
length = find_length(str);
newstr = malloc(sizeof(char) * (length + 1));
if (newstr == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
newstr[i] = str[i];
i++;
}
newstr[length] = '\0';
return (newstr);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: NULL or new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
char *new_name, *new_owner;
if (name == NULL || owner == NULL)
{
return (NULL);
}
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
new_name = str_copy(name);
if (new_name == NULL)
{
free(newdog);
return (NULL);
}
new_owner = str_copy(owner);
if (new_owner == NULL)
{
free(new_name);
free(newdog);
return (NULL);
}
newdog->name = new_name;
newdog->age = age;
newdog->owner = new_owner;
return (newdog);
}

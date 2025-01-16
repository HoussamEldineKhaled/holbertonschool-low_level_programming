#include "dog.h"
#include <stdlib.h>

int find_length(char *str)
{
  int length = 0;
  while (str[length] != '\0')
    {
      length++;
    }
  return (length);
}

char *str_copy(char *str)
{
  char *newstr;
  int i , length;

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

  
  
  return (newdog);
}

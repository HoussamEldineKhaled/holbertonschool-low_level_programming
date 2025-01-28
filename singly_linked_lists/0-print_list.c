#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


size_t print_list(const list_t *h)
{
  int i = 0;
  size_t numb = 0;
  if (h[0])
    {
      printf("[0] (nil)");
      return (0);
    }

  while(h[i])
    {
      numb++;
      i++;
    }
  return (numb);
}

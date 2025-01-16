#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name 
 * @name: name in question
 * @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

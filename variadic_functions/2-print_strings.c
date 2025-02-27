#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - printing strings
 * @separator: separator
 * @n: number of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;
va_start(args, n);
i = 0;
while (i < n)
{
str = va_arg(args, const char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}

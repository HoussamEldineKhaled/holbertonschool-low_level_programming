#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all inputs
 * @format: format of input
*/

void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
char *str;
char *sep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'f' || format[i] == 's' || format[i] == 'i' || format[i] == 'c')
{
printf("%s", sep);
sep = ", ";
}      
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)") ;
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
}
i++;
}
printf("\n");
va_end(args);
}

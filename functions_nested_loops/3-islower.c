#include "main.h"
/**
 *_islower - check for lower case letters
 *@parameter: integer ASCII value of a char
 *Return: Either 0 or 1 dependingon condition
*/

int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
return (0);
}

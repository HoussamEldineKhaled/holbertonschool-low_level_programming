#include "main.h"
/**
 * _atoi - char to int
 * @s: a string
 * Return: result int
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int MAX = 2147483647;
int MIN = -2147483648;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = sign * -1;
i++;
}
else if (s[i] >= '0' && s[i] <= '9')
{
break;
}
else
{
i++;
}
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > (MAX - (s[i] - '0')) / 10 && sign == -1)
{
return (MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
result = result *sign;
return (result);
}

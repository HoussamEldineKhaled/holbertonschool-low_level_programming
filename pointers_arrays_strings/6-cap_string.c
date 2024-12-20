#include "main.h"
/**
 * cap_string - capital
 * @n: input
 * Return: capitalized
*/
char *cap_string(char *n)
{
int i = 1;
if (n[0] >= 'a' && n[0] <= 'z')
{
n[0] -= 32;
} 
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
if (n[i - 1] == ' ' || n[i - 1] == '\t' || n[i - 1] == '\n' || n[i - 1] == ','
|| n[i - 1] == ';' || n[i - 1] == '.' || n[i - 1] == '!'
|| n[i - 1] == '?' || n[i - 1] == '"' || n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' || n[i - 1] == '}')
{
n[i] -= 32; 
}
}
i++;
}
return (n);
}

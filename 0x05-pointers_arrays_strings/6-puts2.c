#include "main.h"
/**
 *puts2 - function that prints every other character of a string
 *@str: holds value of string.
 */
void puts2(char *str)
{
char *j = "\n";
while (*str)
{
_putchar(*str);
str++;
while (*j)
{
_putchar(*j);
j++;
}
}
}


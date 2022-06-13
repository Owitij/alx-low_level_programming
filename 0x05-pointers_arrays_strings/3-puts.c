#include "main.h"
/**
 *_puts -  function that prints a string, followed by a new line
 *@str: holds the value of string
 *
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
str = "\n";
while (*str)
{
_putchar(*str);
str++;
}
}

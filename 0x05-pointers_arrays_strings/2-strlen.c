#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:holds adress of the string.
 *Return: c (Success)
 */
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
return (c);
}

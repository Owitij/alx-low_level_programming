#include "main.h"
/**
 *print_rev - function that prints a string, in reverse, followed by a new line
 *@s: holds the value of the string.
 *
 */
void print_rev(char *s)
{
int j = 0;
int len, i;
char *start, *end, temp;
while (*(s + j) != '\0')
j++;
len = j;
start = s;
end = s;
for (i = 0; i < len - 1; i++)
end++;
for (i = 0; i < len / 2; i++)
{
temp = *end;
*end = *start;
*start = temp;
start++;
end--;
}
}

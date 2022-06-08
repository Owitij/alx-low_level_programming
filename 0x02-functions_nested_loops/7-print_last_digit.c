#include "main.h"
/**
 *print_last_digit - Check last digit
 *@y: An integer input
 *Description: This function prints the last digit of a number
 *Return: last digit of number y
 */
int print_last_digit(int y)
{
int n;
if (y < 0)
n = -1 * (y % 10);
else
n = y % 10;
_putchar((n % 10) + '0');
return (n % 10);
}


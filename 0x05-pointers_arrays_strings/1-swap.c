#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: holds the address of a value
 *@b: hold the address of a different value
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

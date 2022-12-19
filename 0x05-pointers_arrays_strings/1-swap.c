#include"main.h"
/**
 * swap_int - Swap two numbers
 * @a: first number
 * @b: second number
 *Return: none
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

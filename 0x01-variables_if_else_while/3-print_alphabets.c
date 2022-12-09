#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		putchar(r);
	}
	for (r = 'A'; r <= 'Z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);

}

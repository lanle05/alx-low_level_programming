#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - generate password
 * Return: Always 0
 */
int main(void)
{
	int p;
	int s;
	srand(time(NULL));
	s = 0;
	while (s <= 2645)
	{
		p = (rand() % (128 - 32)) + 32;  // Exclude ASCII characters with codes from 1 to 31 and 127
		s += p;
		putchar(p);
	}
	putchar(2772 - s);
	return (0);
}





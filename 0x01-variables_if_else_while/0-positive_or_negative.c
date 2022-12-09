#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%10 is positive\n",n);
	}
	if (n == 0)
	{
		printf("%10 is zero\n",n);
	}
	if (n < 0)
	{
		printf("%10 is negative\n",n);
	}
	return (0);
}


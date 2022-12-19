#include"main.h"
/**
 * int _strlen - returns the length of a string
 * @s: the string
 * Return: 0
 */
int _strlen(char *s)
{
	int i; 

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}


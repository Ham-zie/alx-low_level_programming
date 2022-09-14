#include "stdio.h"
/**
 * This program prints a function that prints x10 the alphabet
 * @void- means no argument
 * Return: zero
 */
void print_alphabet_x10(void)
{
	int n, co;
	co = 0;
	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}

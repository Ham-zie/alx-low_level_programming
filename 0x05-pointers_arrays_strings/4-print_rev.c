#include "main.h"
/**
 * Description: print_rev - imprime en reversa
 * @s: string 
 * Return: 0
 */
void print_rev(char *s)
{
	int lendi = 0;
	int o;
	while (*s != '\0')
	{
		lendi++;
		s++;
	}
	s--;
	for (o = lendi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

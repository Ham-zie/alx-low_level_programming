#include "main.h" 
/**
 * Description: puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the string -1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{	
	int a, n, lendi;
	lendi = 0;
	for (a = 0; str[a] != '\0'; a++)
		lendi++;
	n = (lendi / 2);
	if ((lendi % 2) == 1)
		n = ((lendi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

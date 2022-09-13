#include <stdio.h>
/**
 * main- Entry point
 * @void- means no argument
 * Return: zero
 */
int main(void)
{
	int ch;
	for (ch = 0; ch <= 9; ch++)
	  putchar(ch + '0');
	if (ch <= 8)
	{
		putchar(',')
		putchar(');
	}
}

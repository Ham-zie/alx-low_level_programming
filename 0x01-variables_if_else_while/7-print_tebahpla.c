/*
 * This program prints lowercase alphabet in reverse
 */
#include <stdio.h>
/**
 * main- Entry code
 * @void- means no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * Declares our loop variable
	 */
	char ch;

	/*
	 * loop
	 */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	/*
	 * print newline
	 */
	putchar('\n');
	return (0);
}

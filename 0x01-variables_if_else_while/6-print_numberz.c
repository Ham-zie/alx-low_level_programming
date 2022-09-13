#include <stdio.h>
/**
 * main- This is where my coding begins
 * @void- This means main has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * Define a new int
	 */
	int ch;

	/*
	 * loop
	 */
	for (ch = 0; ch <= 9; ch++)
		putchar(ch + '0');
	putchar('\n');
	return (0);
}

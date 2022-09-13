/* This program prints the base ten numerals */
#include <stdio.h>
/**
 * main- This is where my code starts
 * @void- This means the main has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * Declaring my counter
	 */
	int i;

	/* loop */
	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

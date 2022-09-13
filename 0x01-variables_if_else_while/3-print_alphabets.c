/* This program converts the alphabets to lowercase */
#include <stdio.h>
#include <ctype.h>
/**
 * main - This is where our code starts
 * @void- main takes no argument
 * Return: zero
 */
int main(void)
{
	char chr;
	char j;

	/*
	*container for each upper and lower case char when we loop
	*/
	char lower_case_char;
	char upper_case_char;

	/*
	*loop
	*/
	for (chr = 'a'; chr <= 'z'; chr++)
	{
	lower_case_char = tolower(chr);
	putchar(lower_case_char);
	}
	for (j = 'a'; j <= 'z'; j++)
	{
	upper_case_char = toupper(j);
	putchar(upper_case_char);
	}
	putchar('\n');
	return (0);
	}

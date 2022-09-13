#include <stdio.h>
 /*
  *main- This is where our codeing starts
  *@void-means our main has no argument
  *Return: zero
  */
int main(void)
{
	/*
	 *Define our char ch
	 */
	char ch;

	/*
	 * while loop
	 */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'c')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

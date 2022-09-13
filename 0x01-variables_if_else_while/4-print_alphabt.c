#include <stdio.h>
 /**
  *main- This is where our codeing starts
  *Description: Get list of alphabets with no q and e
  *@void- means our main has no argument
  *Return: zero
  */
int main(void)
{
	/*
	 *Define our char ch
	 */
	char ch;

	/*
	 * for loop
	 */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

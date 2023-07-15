#include <stdio.h>
/**
 * main - Prog Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'c') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

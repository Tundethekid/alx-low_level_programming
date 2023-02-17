#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char lm;

	for (lm = 'z'; lm >= 'a'; lm--)
		putchar(lm);

	putchar('\n');
	return (0);
}

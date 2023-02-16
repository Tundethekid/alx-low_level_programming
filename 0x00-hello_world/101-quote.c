#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: a programme that prints a line into standard error
 * Return: 1 (Success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

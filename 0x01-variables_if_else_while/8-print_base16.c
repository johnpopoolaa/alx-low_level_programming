#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all base 16 numbers in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

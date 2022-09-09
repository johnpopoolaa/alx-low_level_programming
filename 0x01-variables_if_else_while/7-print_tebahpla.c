#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase alphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

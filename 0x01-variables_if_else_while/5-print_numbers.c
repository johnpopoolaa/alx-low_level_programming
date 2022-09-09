#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all single digit numbers from zero
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

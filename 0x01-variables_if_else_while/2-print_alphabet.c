#include <stdio.h>

/**
 * main = entry point
 *
 * Description: Print alphabet in lowercase
 *
 * Return: 0(success)
 */
int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

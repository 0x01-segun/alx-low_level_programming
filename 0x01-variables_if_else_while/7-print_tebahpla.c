#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lwcalp;

	for (lwcalp = 'z'; lwcalp >= 'a'; lwcalp--)
	{
		putchar(lwcalp);
	}
	putchar('\n');
	return (0);
}

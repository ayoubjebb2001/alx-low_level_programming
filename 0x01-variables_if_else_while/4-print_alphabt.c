#include <stdio.h>

/**
 * main - Entry point
 * Description :Print the alphabet lower no q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z' && letter != 'q' && letter != 'e'; letter++)
		putchar (letter);
	putchar('\n');
	return (0);
}

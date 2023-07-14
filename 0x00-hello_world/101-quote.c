#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Not Success)
 */

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, sizeof(quo) / sizeof(char));
	return (1);
}

#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: number to check if is a digit
 *
 * Return: 1 if the char is a digit or 0 for else
 */
int _isdigit(int c)
{
	if (c >= 0 + '0' && c <= 9 + '0')
		return (1);
	else
		return (0);
}

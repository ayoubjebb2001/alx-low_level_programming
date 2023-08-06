#include "main.h"

/**
 *   * _isalpha - Checks for alphabetic character
 *     * @c: The character to be checked
 *       *
 *         * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'a' + 0 && c <= 'z' + 0) || (c >= 'A' + 0 && c <= 'Z' + 0))
		return (1);
	else
		return (0);
}

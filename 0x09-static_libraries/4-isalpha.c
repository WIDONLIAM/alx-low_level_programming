#include "main.h"

/**
 * _isalpha - Will be checking for an alphabetic character
 * @c: Is the character which will be checked
 *
 * Return: (1) if c is a letter, (0) otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

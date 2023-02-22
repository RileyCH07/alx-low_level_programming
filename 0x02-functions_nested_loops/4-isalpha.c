#include "main.h"

/**
 * _isalpha - checks for alphabetical letter
 *
 * @c: character argument
 *
 * Return: 0 or 1
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"
/**
 * _isalpha - check if its a character
 *
 * Return: always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

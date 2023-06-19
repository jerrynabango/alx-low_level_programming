#include "main.h"
/**
 * _isalpha - It checks for alphabetic character c
 *
 * @c: The charcter which is to be checked
 *
 * Return: Checksout 1 if the charcter is c otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


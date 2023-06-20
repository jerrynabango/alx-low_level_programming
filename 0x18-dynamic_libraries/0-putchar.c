#include <unistd.h>
/**
 * _putchar - A function that prints the characters
 *
 * @c: Indicates the character
 *
 * Return: Displays the charatcer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

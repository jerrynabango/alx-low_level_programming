#include "main.h"
#include <unistd.h>

/**
*_putchar - Character c to stdout
*
* @c:Character to print
*
* Return: Indicates successful execution
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

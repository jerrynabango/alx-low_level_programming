#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function that calculates length of string
 *
 * @str: Indicates the length of the string
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    return length;
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return 0;
}


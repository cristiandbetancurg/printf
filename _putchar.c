#include "holberton.h"
#include "holberton.h"
/**
 * _putchar - print char to stdout
 *@character: char to print
 *Return: char
 */
int _putchar(char character)
{
return (write(1, &character, 1));
}

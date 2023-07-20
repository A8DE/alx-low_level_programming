#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function Writes The Character Stdout
 * @c:Character Print
 * Return: Success 1.
 * On error -1 Returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

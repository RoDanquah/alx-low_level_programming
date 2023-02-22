#include <unistd.h>

/**
 * _putchar - writes the  character (an unsigned char) c  to stdout.
 *@c: The character to print
 * Return: 1 (succes); on error -1 is returned or EOF.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
#include <unistd.h>
/**
 * main - A C program that prints to the STDERR
 * Return: 1 (Success)
*/

int main(void)

{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 92);
	return (1);
}

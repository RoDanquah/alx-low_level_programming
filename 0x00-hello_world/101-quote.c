#include <stdio.h>
#include <unistd.h>
/**
 * main - A C program that prints to the STDERR
 * Return: Always 1 (Success)
*/

int main(void)

{
	char m[200] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, m, 59);
	return (1);
}

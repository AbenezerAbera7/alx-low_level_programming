#include <stdio.h>
#include <unistd.h>

/**
 * main - printsthe pharse and that piece of art is useful
 * " - Dora Korpar, 2015-10-19
 * Return: 1 if the program works correcty, 0(zero) otherwise
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}





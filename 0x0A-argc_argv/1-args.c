#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array that contains the program arguments
 * Return: number of arguments
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

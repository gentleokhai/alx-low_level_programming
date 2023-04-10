#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the argument passed to the program
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

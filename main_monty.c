#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
/**
 * main - the main entry point programs.
 * @argc: an integer variable that counts command line arguments.
 * @argv: a character variable that takes in argument.
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *fn;
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr,  "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fn = argv[1];
	file = fopen(fn, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fn);
		exit(EXIT_FAILURE);
	}
	return (0);
}

#include <string.h>
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
	char  line_store[50];
	char *store_line;
	int count;
	char *opcode;

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
	count = 0;
	while (1)
	{
		store_line = fgets(line_store, sizeof(line_store), file);
		count = count + 1;
		if (store_line == NULL)
		{
			break;
		}
		opcode = montystrtok(store_line);
		if (get_int(opcode) == 1)
		{
			printf("L%d: unknown instruction %s\n", count, opcode);
			exit(EXIT_FAILURE);
		}
		/*printf("%d, %s", count, store_line);*/
	}
	return (0);
}

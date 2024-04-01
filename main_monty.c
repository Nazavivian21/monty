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
	char *s_num; 
	int i_num;
	stack_t *tail;
	stack_t *node;

	tail = NULL;

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
			fprintf(stderr, "L%d: unknown instruction %s\n\n", count, opcode);
			exit(EXIT_FAILURE);
		}
		if (strcmp(opcode, "push") == 0)
		{
			s_num = _montystrtok(store_line, count);

			i_num = atoi(s_num);
			printf ("The opcode is: %s and the integer is: %d\n", opcode, i_num);	

			node = create_node(i_num);
			push(tail, node);
		}
		if (strcmp(opcode, "pall") == 0)
		{
			pall(tail);
		}
	}
	return (0);
}

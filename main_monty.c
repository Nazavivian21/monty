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
	char  line_store[50];
	char *store_line;
	int count, i_num;
	char *opcode, *s_num;
	FILE *file;
	stack_t *tail, *node;

	tail = NULL;
	file = _file(argc, argv);
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
			node = create_node(i_num);
			push(&tail, node);
		}
		if (strcmp(opcode, "pall") == 0)
		{
			pall(&tail);
		}
	}
	return (0);
}

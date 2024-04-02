#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"
/**
 * get_int - an function that checks for opcodes
 * @opcode: a string that stores tokens
 * @count: an integer variable for storing line numbers
 * Return: 0 on success and 1 on failure.
*/

int get_int(char *opcode, int count)
{
	int i;
	char *arr[] = {"pall", "push", NULL};

	for (i = 0; arr[i] != NULL; i++)
	{
		if (strcmp(opcode, arr[i]) == 0) /*The opcode was found*/
		{
			return (0);
		}
	}
	/*The opcode wasn't found*/
	fprintf(stderr, "L%d: unknown instruction %s\n", count, opcode);
	exit(EXIT_FAILURE);
}

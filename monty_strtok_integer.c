#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"
/**
 * _montystrtok - a function that gets tokens from strings.
 * @line: a string variable that stores strings.
 * @line_number: an integer variable that stores the number of lines.
 * Return: a token.
*/

char *_montystrtok(char *line, int line_number)
{
	char *linedup,  *int_token;

	linedup = strdup(line);

	strtok(linedup, delim);

	int_token = strtok(NULL, delim);

	if (int_token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	return (int_token);
}

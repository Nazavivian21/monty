#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"
/**
 * montystrtok - a function that gets tokens from strings.
 * @line: a string variable that stores strings.
 * Return: a token.
*/

char *montystrtok(char *line)
{
	char *token;
	char *linedup;

	linedup = strdup(line);

	token = strtok(linedup, delim);
	return (token);
}

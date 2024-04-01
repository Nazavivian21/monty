#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "monty.h"

/**
 * _file - a function that takes in an argc and argv.
 * @argc: an integer variable for storing argument counts.
 * @argv: an array that takes in command line arguments.
 * Return: a file.
*/
FILE *_file(int argc, char *argv[])
{
	char *filename;
	FILE *file;
	/*Check if the funtion was called with the corret number of args*/
	if (argc != 2)
	{
		fprintf(stderr,  "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1]; /*Stores the file name*/
	file = fopen(filename, "r");/*Reads the file*/
	if (file == NULL) /*Checks if the file exists*/
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	else
	{
		return (file);
	}
}

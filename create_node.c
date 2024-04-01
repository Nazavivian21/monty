#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * create_node - a function that creates a node.
 * @var: a variable that stores an integer.
 * Return: a node.
*/
stack_t *create_node(int var)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	node->n = var;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}

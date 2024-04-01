#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * 
*/
stack_t *create_node(int var)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	node->n = var;         /* I have dereferenced the node and I am now accessing it's n value*/
	node ->prev = NULL;
	node ->next = NULL;

	return (node);
}
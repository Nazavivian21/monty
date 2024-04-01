#include "monty.h"
#include <stddef.h>

void push(stack_t *tail, stack_t *node)
{
	if (tail != NULL)
	{
		tail -> next = node;
		node -> prev = tail;
		tail = node;
	}
	else
	{
		tail = node;
	}
}
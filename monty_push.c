#include "monty.h"
#include <stddef.h>
/**
 * push -  pushes an element to the stack.
 * @tail: the tail of the stack.
 * @node: the element to push the stack
 * Return: nothing.
*/

void push(stack_t **tail, stack_t *node)
{
	if (*tail != NULL)
	{
		(*tail)->next = node;
		node->prev = *tail;
		*tail = node;
	}
	else
	{
		*tail = node;
	}
}

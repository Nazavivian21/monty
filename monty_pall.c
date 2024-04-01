#include <stdio.h>
#include "monty.h"
/**
 * pall - a function that prints the contents of a stack.
 * @tail: the tail of the stack.
 * Return: nothing
*/
void pall(stack_t **tail)
{
	stack_t *i;

	if (*tail == NULL)
	{
		;
	}
	for (i = *tail; i != NULL; i = i->prev)
	{
		printf("%d\n", i->n);
	}
}

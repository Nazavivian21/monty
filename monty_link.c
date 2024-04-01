#include "monty.h"
#include <stdio.h>

void link(stack_t *first, stack_t *second)
{
  second -> prev = first;
  first -> next = second;
}
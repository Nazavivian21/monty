#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#define delim " \n"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *montystrtok(char *line);
int get_int(char *opcode, int count);
stack_t *create_node(int var);
void push(stack_t **tail, stack_t *node);
void pall(stack_t **tail);
char *_montystrtok(char *line, int line_number);
FILE *_file(int argc, char *argv[]);

#endif

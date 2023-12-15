#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * add - Adds the top two elements of a stack
 * @stack: Pointer to the stack address
 * @line_number: Line number
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int data;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = ((*stack)->n) + ((*stack)->next->n);
	(*stack)->next->n = data;
	pop(stack, line_number);
}

#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * sub - Subtracts the top element of the stack from the
 * second top element
 * @stack: Pointer to the stack address
 * @line_number: Line number
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int data;

	if (((*stack) == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = ((*stack)->next->n) - ((*stack)->n);
	(*stack)->next->n = data;
	pop(stack, line_number);
}

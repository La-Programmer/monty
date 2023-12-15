#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * pop - Removes the top elements of the stack
 * @stack: Address to the stack pointer
 * @line_number: Line number
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *holder;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	holder = *stack;
	if ((*stack)->next == NULL)
		*stack = NULL;
	else
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	free(holder);
}

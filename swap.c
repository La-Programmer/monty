#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * swap - Swaps the top two elements of a stack
 * @stack: Pointer to the stack address
 * @line_number: Line number
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *holder;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	holder = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->prev = *stack;
	holder->prev = NULL;
	holder->next = *stack;
	(*stack)->prev = holder;
	*stack = holder;
}

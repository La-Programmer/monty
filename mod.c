#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * mod - Does the mod of the second top element of the stack by
 * the top element of the stack
 * @stack: Pointer to the stack address
 * @line_number: Line number
 * Return: Nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int data;

	if (((*stack) == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = ((*stack)->next->n) % ((*stack)->n);
	(*stack)->next->n = data;
	pop(stack, line_number);
}

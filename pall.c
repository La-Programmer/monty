#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
 * pall - Prints all elements in the stack
 * @stack: Address to the stack pointer
 * @line_number: Line number
 * Returns: Nothing
 */
void pall(stack_t **stack, unsigned int __attribute__ ((unused)) line_number)
{
	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}

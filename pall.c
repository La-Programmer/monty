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
	stack_t *holder = *stack;

	while (holder != NULL)
	{
		printf("%d\n", (holder)->n);
		holder = (holder)->next;
	}
}

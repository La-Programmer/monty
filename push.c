#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "monty.h"
/**
 * push - Pushes an element on to the stack
 * @stack: Address to the stack pointer
 * @line_number: Line number
 * Return: 0 if successful, -1 if failure
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	char *endptr;
	long int long_data = strtol(operand, &endptr, 10);
	int data;

	if ((*endptr != '\0' && !isspace((unsigned char)*endptr)))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = (int)long_data;
	if (new_node == NULL)
		exit(100);
	new_node->n = data;

	if (*stack == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		new_node->prev = NULL;
	}
	*stack = new_node;
}

#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * get_function - Gets the right function based on the opcode
 * @opcode: Opcode
 * Return: Pointer to appropriate function else NULL
 */
void (*get_function(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divi},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	int counter = 0;

	while (functions[counter].opcode != NULL)
	{
		if (!strcmp(functions[counter].opcode, opcode))
			return (functions[counter].f);
		counter++;
	}
	return (NULL);
}

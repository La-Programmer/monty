#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * main - Main function for monty interpreter
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char line[100], *opcode = NULL;
	unsigned int line_number = 1;
	stack_t *head = NULL;
	void (*function)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, 100, fp) != NULL)
	{
		operand = NULL;
		file_reader(line, &opcode);
		if (!strcmp(opcode, "push") && (operand == NULL))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		function = get_function(opcode);
		if (function == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
		else
			function(&head, line_number);
		/*printf("Node value: %d\n", head->n);*/
		line_number++;
	}
	return (0);
}

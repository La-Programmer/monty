#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * file_reader - Extracts opcode and operand from lines of monty script
 * @line: Line
 * @opcode: Address to store opcode
 * Return: Always 0
 */
int file_reader(const char line[100], char **opcode)
{
	char *temp, *holder;
	int word_count = 0;
	unsigned int i = 0;

	while ((i < strlen(line)) && word_count < 2)
	{
		if (isspace(line[i]))
			i++;
		else
		{
			temp = malloc(sizeof(char) * 6);
			if (temp == NULL)
				return (100);
			holder = temp;
			while (!isspace(line[i]))
			{
				*temp = line[i];
				temp++;
				i++;
			}
			*temp = '\0';
			temp = holder;
			if (*holder != '\0')
				word_count++;
			if (word_count == 1)
			{
				free(*opcode);
				*opcode = malloc(strlen(holder) + 1);
				strcpy(*opcode, holder);
			}
			else if (word_count == 2)
			{
				free(operand);
				operand = malloc(strlen(holder) + 1);
				strcpy(operand, holder);
			}
			free(holder);
		}
	}
	return (0);
}

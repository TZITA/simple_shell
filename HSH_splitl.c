#include "main.h"

/**
 * HSH_splitl - Splits command using strtok
 * @com_line: command given in shell
 *
 * Return: Splitted.
 */

char **HSH_splitl(char *com_line)
{
	int buffer_size = HSH_TOKENS_BS;
	int pos = 0;
	char **tokens = malloc(buffer_size * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("Allocation Error:\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(com_line, HSH_TOKENS_DELIMITER);
	while (token != NULL)
	{
		tokens[pos] = token;
		pos++;

		if (pos >= buffer_size)
		{
			buffer_size += HSH_TOKENS_BS;
			tokens = realloc(tokens, buffer_size * sizeof(char *));
			if (!tokens)
			{
				perror("Allocation Error:\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, HSH_TOKENS_DELIMITER);
	}
	tokens[pos] = NULL;
	return (tokens);
}

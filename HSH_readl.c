#include "main.h"

/**
 * HSH_readl - Reads command entered to shell
 *
 * Return: A pointer to a buffer.
 */

char *HSH_readl(void)
{
	char *com_line = NULL;
	size_t buffer_size = 0;

	if (getline(&com_line, &buffer_size, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("READ LINE ERROR");
			exit(EXIT_FAILURE);
		}
	}
	return (com_line);
}

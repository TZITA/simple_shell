#include "main.h"

/**
 * HSH_main_loop - main loop to interpret commands
 *
 * Return: Nothing.
 */

void HSH_main_loop(void)
{
	char *com_line;
	char **com_args;
	int status;

	do {
		printf("$ ");
		com_line = HSH_readl();
		com_args = HSH_splitl(com_line);
		status = HSH_exec(com_args);

		free(com_line);
		free(com_args);
	} while (status);
}

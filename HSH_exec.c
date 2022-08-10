#include "main.h"

/**
 * HSH_exec - Launches a process or a builtin
 * @com_args: arguments array
 *
 * Return: HSH_START.
 */

int HSH_exec(char **com_args)
{
	int i;
	char *builtin_com[] = {
		"cd",
		"exit",
		"help",
		"setenv",
		"unsetenv"
	};
	int (*builtin_functions[])(char **) = {
		&HSH_cd,
		&HSH_exit,
		&HSH_help,
		&HSH_setenv,
		&HSH_unsetenv
	};

	if (com_args[0] == NULL)
	{
		return (1);
	}

	for (i = 0; i < HSH_BINS_NUM(); i++)
	{
		if (str_cmp(com_args[0], builtin_com[i]) == 0)
		{
			return ((*builtin_functions[i])(com_args));
		}
	}
	return (HSH_START(com_args));
}

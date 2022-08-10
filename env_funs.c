#include "main.h"

/**
 * HSH_setenv - init a new env or mofidy existing one
 * @com_args: Array arguments
 *
 * Return: 0.
 */

int HSH_setenv(char **com_args)
{
	if ((com_args[1] != NULL) && (com_args[2] != NULL))
	{
		if (setenv(com_args[1], com_args[2], 1) == 0)
		{
			setenv(com_args[1], com_args[2], 1);
		}
		else
		{
			perror("setenv error");
		}
	}
	else
	{
		perror("setenv error");
	}
	return (1);
}

/**
 * HSH_unsetenv - removes an environment var
 * @com_args: Array arguments
 *
 * Return: 0.
 */

int HSH_unsetenv(char **com_args)
{
	if ((com_args[1] != NULL) && (unsetenv(com_args[1]) == 0))
	{
		unsetenv(com_args[1]);
	}
	else
	{
		perror("unsetenv error");
	}
	return (1);
}

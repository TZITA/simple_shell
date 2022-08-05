#include "main.h"

/**
 * HSH_BINS_NUM - returns number of builtin command
 *
 * Return: Num.
 */

int HSH_BINS_NUM(void)
{
	char *builtin_com[] = {
		"cd",
		"exit",
		"help",
		"setenv"
	};

	return (sizeof(builtin_com) / sizeof(char *));
}

/**
 * HSH_setenv - initialize a new env var or modify an existing one
 * @com_args: Array of arguments
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
 * HSH_cd - Change dir builtin function
 * @com_args: arguments array
 *
 * Return: St.
 */

int HSH_cd(char **com_args)
{
	if (com_args[1] == NULL)
	{
		chdir("~");
	}
	else
	{
		if (chdir(com_args[1]) != 0)
		{
			perror("cd Implementation Error");
		}
	}
	return (1);
}

/**
 * HSH_exit - Exits the shell
 * @com_args: arguments array
 *
 * Return: 0.
 */

int HSH_exit(__attribute__((unused)) char **com_args)
{
	return (0);
}

/**
 * HSH_help - Prints tips useful to user
 * @com_args: arguments array
 *
 * Return: ST.
 */

int HSH_help(__attribute__((unused)) char **com_args)
{
	int i;
	char *builtin_com[] = {
		"cd",
		"exit",
		"help"
	};

	printf("HSH SIMPLE SHELL PROJECT FOR ALX SE\n");
	printf("Write Program names and arguments and then hit ENTER.\n");
	printf("Builtin commands are:\n");

	for (i = 0; i < HSH_BINS_NUM(); i++)
	{
		printf(" %s\n", builtin_com[i]);
	}
	printf("Use man command to access the information of other programs.\n");
	return (1);
}

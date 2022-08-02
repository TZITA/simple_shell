#include "main.h"

/**
 * HSH_START - launches a program
 * @com_args: arguments array
 *
 * Return: st.
 */

int HSH_START(char **com_args)
{
	pid_t pid, __attribute__((unused)) chpid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(com_args[0], com_args) == -1)
		{
			perror("Execvp Error:");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("Error Forking:");
	}
	else
	{
		do {
			chpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}

#include "main.h"

/**
 * main - Shell entry point
 * @argc: Number of arguments
 * @argv: Arguments array
 * @env: Environment array
 *
 * Return: St.
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv, __attribute__((unused)) char **env)
{
	HSH_main_loop();
	return (EXIT_SUCCESS);
}

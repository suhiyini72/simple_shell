#include "main.h"

/**
 * dosu_env - A function that prints the current environment
 *
 * Return: env, the current environment
 */

void dosu_env(void)
{
	char **dosuenv = environ;

	while (*dosuenv)
	{
		write(STDOUT_FILENO, *dosuenv, strlen(*dosuenv));
		write(STDOUT_FILENO, "\n", 1);
		dosuenv++;
	}
}


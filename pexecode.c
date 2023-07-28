#include "main.h"

/**
 * dosuexe_com - a function that executes a command
 * @dosukens: a pointer to a pointer passed as arguments to the program
 *
 * Return: 1 on success always, and If execvp fails, print an error message
 */

void dosuexe_com(char **dosukens)
{
	pid_t sudi = fork();

	if (sudi < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (sudi == 0)
	{
		if (execvp(dosukens[0], dosukens) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int about;

		waitpid(sudi, &about, 0);
	}
}


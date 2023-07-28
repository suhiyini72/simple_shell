#include "main.h"

/**
 * dosu_token- a function that tokenizes the user command arguments
 * @instruct: a pointer to be passed as arguments to the program
 *
 * Return: 1 on success always
 */

char **dosu_token(char *instruct)
{
	int mem_size = DOSU_MAX_SIZE;
	int location = 0;
	char *suken;

	char **dosukens = (char **)malloc(mem_size * sizeof(char *));

	if (!dosukens)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	suken = strtok(instruct, " \t\n\r\a");
	while (suken != NULL)
	{
		dosukens[location] = suken;
		location++;
		if (location >= mem_size)
		{
			mem_size += DOSU_MAX_SIZE;
			dosukens = (char **)realloc(dosukens, mem_size * sizeof(char *));
			if (!dosukens)
			{
				perror("realloc");
				exit(EXIT_FAILURE);
			}
		}
		suken = strtok(NULL, " \t\n\r\a");
	}
	dosukens[location] = NULL;
	return (dosukens);
}


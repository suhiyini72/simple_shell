#include "main.h"

/**
 * dosu_listen - a function that read user input arguments
 *
 * Return: 1 on success always, else -1 for failure
 */

char *dosu_listen(void)
{
	char *input = NULL;
	size_t mem_size = 0;
	ssize_t num_read;

	num_read = getline(&input, &mem_size, stdin);
	if (num_read == -1)
	{
		if (feof(stdin))
		{
			char current_line[] = "\n";

			write(STDOUT_FILENO, current_line, 1);
			free(input);
			exit(EXIT_SUCCESS);
		}
		else
		{
			char dosu_text[] = "Error: failed to read input\n";

			write(STDOUT_FILENO, dosu_text, strlen(dosu_text));
			free(input);
			exit(EXIT_FAILURE);
		}
	}
	if (num_read > 0 && input[num_read - 1] == '\n')
	{
		input[num_read - 1] = '\0';
	}
	return (input);
}


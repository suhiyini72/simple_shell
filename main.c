#include "main.h"

/**
 * main - The main entry point of the program
 * Description: A simple shell program using c language
 *
 * Return: 0 for success, else -1 on failure
 */

int main(void)
{
	char *user_input = NULL;
	char **arguments;

	while (1)
	{
		dosu_ask();
		user_input = dosu_listen();
		if (dosuexit_com(user_input))
		{
			free(user_input);
			break;
		}
		if (strcmp(user_input, "dosuenv") == 0)
		{
			dosu_env();
		}
		else
		{
			arguments = dosu_token(user_input);
			dosuexe_com(arguments);
			free(arguments);
		}
		free(user_input);
	}
	return (0);
}


#include "main.h"

/**
 * dosu_ask - a function that prompts the user for an userint
 *
 * Return: 1 on success always
 */

void dosu_ask(void)
{
	char dosu[] = "$ ";

	write(STDOUT_FILENO, dosu, strlen(dosu));
}


#include "main.h"

/**
 * dosuexit_com - a function that exits the shell program
 * @instruct: a pointer variable to the exit function
 *
 * Return: 1 if the instruction is a built-in command, 0 otherwise
 */

int dosuexit_com(char *instruct)
{
	return (strcmp(instruct, "exit") == 0);
}


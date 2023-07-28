#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void dosu_ask(void);
char *dosu_listen(void);
char **parse_input(char *input);
char **dosu_token(char *instruct);
void dosuexe_com(char **dosukens);
int dosuexit_com(char *instruct);
void dosu_env(void);

extern char **environ;
#define DOSU_MAX_SIZE 1024

#endif


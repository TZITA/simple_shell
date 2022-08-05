#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#define HSH_TOKENS_BS 64
#define HSH_TOKENS_DELIMITER " ;\t\r\n\a"
extern char **environ;

int str_cmp(const char *s1, const char *s2);
void HSH_main_loop(void);
char *HSH_readl(void);
char **HSH_splitl(char *com_line);
int HSH_START(char **com_args);
int HSH_setenv(char **com_args);
int HSH_cd(char **com_args);
int HSH_help(char **com_args);
int HSH_exit(char **com_args);
int HSH_BINS_NUM(void);
int HSH_exec(char **com_args);


#endif

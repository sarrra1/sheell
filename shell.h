#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stddef.h>
#define DELIM " \t\n"
extern char **environ;

int is_positive_number(char *str);
int _atoi(char *str);
int is_builtin(char *command);
void handle_builtin(char **command, char **argv, int *status, int idx);
void exit_shell(char **command, char **argv, int *status, int idx);
void print_env(char **command, int *status);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *stc);
char *_strdup(const char *str);
void print_error(char *name, char *cmd, int idx);
void reverse_string(char *str, int len);
char *_itoa(int n);
void freearray(char **arr);
char *read_line(void);
char **tokenizer(char *line);
int _execute(char **command, char **argv, int idx);
char *_getenv(char *variable);
char *_getpath(char *command);

#endif

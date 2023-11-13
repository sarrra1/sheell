#include "shell.h"

int is_builtin(char *command)
{
    char *builtins[] = {
        "exit", "env", "setenv", "cd", NULL};
    int i;
    for (i = 0; builtins[i]; i++)
    {
        if (_strcmp(command, builtins[i]) == 0)
            return (1);
    }
     return 0;
}

void handle_builtin(char **command, char **argv, int *status, int index)
{
    if (_strcmp(command[0], "exit") == 0)
        exit_shell(command, argv, status, index);
    else if (_strcmp(command[0], "env") == 0)
        print_env(command, status);
}
void exit_shell(char **command, char **argv, int *status, int index)
{
    int exit_value = (*status);
    char *idx, mssg[] = ": exit :Illeggal number : ";
    if (command[1])
    {
        if (is_positive_number(command[1]))
        {
            exit_value = _atoi(command[1]);
        }
        else
        {
            idx = _itoa(index);
            write(STDOUT_FILENO, argv[0], _strlen(argv[0]));
            write(STDOUT_FILENO, ":", 2);
            write(STDOUT_FILENO, idx, _strlen(idx));
            write(STDOUT_FILENO, mssg, _strlen(mssg));
            write(STDOUT_FILENO, command[1], _strlen(command[1]));
            write(STDOUT_FILENO, "\n", 1);
            free(idx);
            freearray(command);
            (*status) = 2;
            return;
        }
    }
     freearray(command);
    exit(exit_value);

}

void print_env(char **command, int *status)
{
    int i;
    for (i = 0; environ[i]; i++)
    {
        write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
    }
    freearray(command);
    (*status) = 0;
}


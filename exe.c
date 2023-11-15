#include "shell.h"

int _execute(char **command, char **argv, int idx)
{
char *full_cmd;
pid_t child;
int status;
full_cmd =_getpath(command[0]);
if (!full_cmd)
{
print_error(argv[0], command[0], idx);
freearray(command);
return (127);
}
printf("Command: %s\n", command[0]);
printf("Full command: %s\n", full_cmd);
child = fork();
if (child == 0)
{
if (execve(command[0], command, environ) == -1)
{  
perror("execve");
free(full_cmd), full_cmd = NULL;
/*perror(argv[0]);*/
freearray(command);
/*exit(0);*/
}
}
else
{
waitpid(child, &status, 0);

freearray(command);
free(full_cmd), full_cmd = NULL;
    }
    return (WEXITSTATUS(status));
}

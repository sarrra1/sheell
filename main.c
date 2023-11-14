#include "shell.h"

int main(int ac, char **argv)
{
    char *line = NULL;
    char **command = NULL;
    int status = 0, index = 0 ;
    /*int i;*/
    (void)ac;

    while (1)
    {
        line = read_line();
        if (line == NULL)
        {   if (isatty(STDIN_FILENO))
               write(STDOUT_FILENO, "\n", 1);
            return (status);
        }
        /*free(line);*/
        index++;

        command = tokenizer(line);
        if (!command)
           continue;

        if (is_builtin(command[0]))
            handle_builtin(command, argv, &status, index);
        else
	{status = _execute(command, argv, index);}

    }
}


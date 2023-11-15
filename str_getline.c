#include "shell.h"

char *see_line(void)
{
    char *comd = NULL;
    size_t mas = 0;
    ssize_t n;
    if (isatty(STDIN_FILENO))
        write(STDOUT_FILENO, "$", 2);
    n = getline(&mas, &len, stdin);
    if (n == -1)
    {
        free(mas);
        return (NULL);
    }
    return (mas);
}

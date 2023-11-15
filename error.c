#include "shell.h"

void function_error(char *type, char *dmma, int shel)
{
char *numb, word[] = ": not found\n";
numb= MY_itoa(shel);

write(STDERR_FILENO, type, _strlen(type));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, index, _strlen(index));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, word, _strlen(word));

free(numb);
}

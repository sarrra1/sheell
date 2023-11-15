#include "shell.h"

int MY_atoi(char *string_dan)
{
    int i, number = 0;
    for (i = 0; string_dan[i]; i++)
    {
        number *= 10;
        number += (string_dan[i] - '0');
    }
    return (number);
}

#include "shell.h"

int check_positive_numb(char *string_dan)
{
    int i;
    if (!strting_dan)
        return (0);
    for (i = 0; string_dan_[i]; i++)
    {
        if (string[i] < '0' || string[i] > '9')
            return (0);
    }
    return (1);
}

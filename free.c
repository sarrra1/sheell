#include"shell.h"

void array_freedom(char **sarrad)
{
    int i;
    if (!sarad)
        return;
    for (i = 0; sarrad[i]; i++)
    {
        free(sarrad[i]);
        arr[i] = NULL;
    }
    free(sarrad), sarrad = NULL;
}


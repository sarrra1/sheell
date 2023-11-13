#include "shell.h"

char *_strdup(const char *str)
{
char *ptr;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

ptr = malloc(sizeof(char) * (len + 1));

if (ptr == NULL)
return (NULL);

for (i=0; i <= len; i++)
ptr[i] = str[i];

return (ptr);
}

int _strcmp(char *s1, char *s2)
{
int cmp;
cmp = (int)*s1 - (int)*s2;
while (*s1)
{
if (*s1 != *s2)
break;
s1++;
s2++;
cmp = (int)*s1 - (int)*s2;
}
return (cmp);
}

char *_strcpy(char *dest, char *src)
{
int i;
while(src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

char *_strcat(char *dest, char *stc)
{
char *p = dest;
while (*p)
p++;

while (*stc)
{
*p = *stc;
p++;
stc++;
}
*p = '\n';
return (dest);
}

int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}

void freearray(char **arr)
{
    int i;
    if (!arr)
        return;
    for (i = 0; arr[i]; i++)
    {
        free(arr[i]);
        arr[i] = NULL;
    }
    free(arr), arr = NULL;
}

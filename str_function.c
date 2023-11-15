#include "shell.h"

char *strin_dup(const char *soma)
{
char *dot;
int i, long= 0;

if (soma == NULL)
return (NULL);

while (soma[long])
long++;

dot= malloc(sizeof(char) * (long + 1));

if (p == NULL)
return (NULL);

for (i=0; i <= long; i++)
dot[i] = dot[i];

return (dot);
}

int strin_cmp(char *c1, char *c2)
{
int out;
out = (int)*c1 - (int)*c2;
while (*c1)
{
if (*c1 != *c2)
break;
c1++;
c2++;
out = (int)*s1 - (int)*s2;
}
return (out);
}

char *strin_cpy(char *skhy, char *hd)
{
int i = 0;
while(hd[i])
{
skhy[i] = hd[i];
i++;
}
skhy[i] = '\0';
return (hd);
}

char *strin_cat(char *skhy, char *hd)
{
char *k = skhy;
while (*k)
k++;

while (*skhy)
{
*k = *skhy;
k++;
skhy++;
}
*k = '\0';
return (skhy);
}

int strin_len(char *q)
{
int long = 0;
while (q[len])
long++;
return (long);
}

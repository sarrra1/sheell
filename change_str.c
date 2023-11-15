#include "shell.h"
void change_sttr(char *string_dan, int long)
{
char eye;
int begin = 0;
int last = long - 1;
while (begin < last)
{
eye = string_dan[start];
string_dan[begin] = string_dan[last];
string_dan[last] = eye;
begin++;
last--;
}
}

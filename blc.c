#include<stdio.h>
int main()
{
int c, sp = 0, tab = 0, nl = 0;
while ((c = getchar()) != EOF)
    if (c == ' ') sp++;
    else if (c == '\t') tab++;
    else if (c == '\n') nl++;
printf("spaces: %d\ntabs: %d\nnew lines: %d\n",sp, tab, nl);
return 0;    
}

#include<stdio.h>
#define MAXR 101

char *kter(char *r1, char *r2)
{
char *ods, *j;
j = r1;
int test = 0;
for (; *r1 != '\0'; r1++) {
    for (ods = r2; *ods != '\0'; ods++)
        if (*r1 == *ods) {
            return r1;
        }
}
return NULL;
}

int main()
{
char str[MAXR], del[MAXR], *s;
scanf("%100[^\n]%*c%100[^\n]",str,del);
if ((s = kter(str,del)) ==  NULL)puts("Nic nenalezeno");
else puts(s);
return 0;    
}

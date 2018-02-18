#include<stdio.h>
#define MAXR 101

void odstran(char *r1, char *r2)
{
char *ods, *j;
j = r1;
int test = 0;
for (; *r1 != '\0'; r1++) {
    for (ods = r2; *ods != '\0'; ods++)
        if (*r1 == *ods) {
            test = 0;
            break;
        }
        else test = 1;
    if (test) *j++ = *r1;
}
*j = 0;
}

int main()
{
char str[MAXR], del[MAXR];
scanf("%100[^\n]%*c%100[^\n]",str,del);
odstran(str,del);
printf("%s\n",str);
return 0;    
}

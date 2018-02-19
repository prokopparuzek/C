#include<stdio.h>
#define MAXS 1001
void escape(char *s, char *r)
{
for (;*s != 0; s++) {
    if (*s == '\\')
        switch (*++s) {
        case 'n':
            *r++ = '\n';
            break;
        case 't':
            *r++ = '\t';
            break;
        }
    else *r++ = *s;
}
*r = 0;
}

int main()
{
char str[MAXS], out[MAXS];
scanf("%1000[^q]",str);
escape(str,out);
printf("%s\n",out);
return 0;    
}

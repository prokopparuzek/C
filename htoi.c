#include<stdio.h>
#include<string.h>
#include<math.h>
int Xtod(char x)
{
switch (x) {
    case 'A':
    case 'a':
        return 10;
    case 'B':
    case 'b':
        return 11;
    case 'C':
    case 'c':
        return 12;
    case 'D':
    case 'd':
        return 13;
    case 'E':
    case 'e':
        return 14;
    case 'F':
    case 'f':
        return 15;
}
}
int htoi(char *s)
{
int x, n, d = 0;
if (*s == '0' && (*(s + 1) == 'x' || *(s + 1) == 'X')) s += 2;
//sscanf(s,"%x",&x);
d = strlen(s) - 1;
do {
    if ((*s >= '0' && *s <= '9') || (*s >= 'a' && *s <= 'f') || (*s >= 'A' && *s <= 'F')) {
        if (*s >= '0' && *s <= '9')
            n = *s - '0';
        else
            n = Xtod(*s);
        x = x + (n * pow(16, d--));
    }
} while (d >= 0);
return x;    
}
int main()
{
char r[81];
scanf("%80s",r);
printf("%d\n",htoi(r));
return 0;
}

#include<stdio.h>
int tolower(int c)
{
return c = (c >= 'A' && c <= 'Z')?c + (97 - 65):c;    
}
int main()
{
char str[81], *z;
z = str;
scanf("%80[^\n]",z);
while (*z)
    putchar(tolower(*z++));
putchar('\n');
return 0;    
}

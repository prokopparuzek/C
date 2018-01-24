#include<stdio.h>
#define VNE 0
#define UVN 1
int main()
{
int c, stav = 0;
while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n'){
        if (stav == UVN){
            stav = VNE;
            putchar('\n');
            if (c != '\n')
                putchar(c);
        }
        else
            putchar(c);
    }
    else {
        stav = UVN;
        putchar(c);
    }
return 0;
}

#include<stdio.h>
#define VNE 0
#define UVN 1
int main()
{
int pocet[16], i, c, stav = 0, ds = 0;
for (i = 0; i < 16; i++)
    pocet[i] = 0;
while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
        stav = VNE;
        if (ds != 0)
            if (ds < 15)
                pocet[ds - 1]++;
            else
                pocet[15]++;
            ds = 0;
    }
    else {
        stav = UVN;
        ds++;
    }
    for (i = 0; i < 16; i++)
            if (i < 15) {
                printf("%2d: ", i + 1);
                for (; pocet[i] > 0; pocet[i]--)
                    putchar('#');
                putchar('\n');
            }
            else {
                printf("delsi: ");
                for (; pocet[15] > 0; pocet[i]--)
                    putchar('#');
                putchar('\n');
            }
return 0;    
}

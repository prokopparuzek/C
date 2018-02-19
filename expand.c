#include<stdio.h>
#define MAXS 1001

void expand(char *s, char *r)
{
// pokud se zada jako krajni hodnota '-' tak to nefunguje
char z, i;
for (z = *s; *s != 0; z = *s++) {
    if (*s == '-' && z != '-' && *(s + 1) != '-' && *(s + 1) != 0) { // testuje -
        for (i = z + 1; i < *(s+1); i++) // expanze
            *r++ = i;
    }
    else {
        *r++ = *s; // co je navic se vypise beze zmeny
    }
}
*r = 0; // pridani ukoncovaci \0
}

int main()
{
char str[MAXS], out[MAXS];
scanf("%1000[^\n]",str);
expand(str,out);
printf("%s\n",out);
return 0;    
}

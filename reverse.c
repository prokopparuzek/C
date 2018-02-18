#include<stdio.h>
#define MAXR 1000
 int nactiR(char *r, int lim)
 {
 int i, z;
 for (i = 0; (z = getchar()) != EOF && i < lim - 1 && z != '\n'; i++ )
     r[i] = z;
 if (z == '\n') {
    r[i] = z;
    i++;
 }
 r[i] = '\0';
 if (z != '\n' && z != EOF)
     for (i++; (z = getchar()) != EOF && z != '\n'; i++);
 return i;
 }

 void reverse(char *r)
 {
    char swp, *z;
    for (z = r; *z != '\n'; z++);
    for (z--; z > r; z--, r++) {
        swp = *z;
        *z = *r;
        *r = swp;
    }
 }

 int main()
 {
 char radek[MAXR];
 while (nactiR(radek,MAXR) > 0) {
 reverse(radek);
 printf("%s",radek);
 }
 return 0;    
 }

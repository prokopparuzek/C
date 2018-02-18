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

 void copy(char *i, char *o)
 {
    while ((*(o++) = *(i++)) != '\0');    
 }

 int main()
 {
 char nejdelsi[MAXR], radek[MAXR];
 int max = 0, d;
 while ((d = nactiR(radek, MAXR)) > 0) {
    if (d > max) {
        max = d;
        copy(radek,nejdelsi);
    }
 }
printf("%d: %s\n",max,nejdelsi);
 return 0;    
 }

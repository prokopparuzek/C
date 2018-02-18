#include<stdio.h>
#define MAXR 1000
#define TR 1
#define SL 0
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

 void delT(char *r)
 {
    char *tral = NULL;
    int stav = SL;
    while (*r != '\0') {
        if ((*r == ' ' || *r == '\t') && stav == SL) {
            stav = TR;
            tral = r;
        }
    }
    if (tral != NULL) {
        *tral = '\n';
        *++tral = '\0';
    }
 }

 int main()
 {
 char radek[MAXR];
 while (!feof(stdin)) {
    nactiR(radek,MAXR);
    printf("%s",radek);
 }
 return 0;    
 }

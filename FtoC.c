#include<stdio.h>
int main()
{
    float farth;
    int horni = 300, dolni = 0, krok = 20;
    farth = dolni;
    printf("Prevod teplot\nfarh\tcelsius\n");
    for (;farth <= horni; farth += krok){
        printf("%3.0f\t%6.1f\n",farth,5 * (farth - 32) / 9);
    }
}

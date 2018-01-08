#include<stdio.h>
#define DOLNI 0
#define HORNI 300
#define KROK 20
int main()
{
    int cesius;
    printf("Prevod teplot\ncesius\tfarh\n");
    for (cesius = HORNI; cesius >= DOLNI; cesius -= KROK){
        printf("%3d\t%6.1f\n",cesius,cesius * (9.0 / 5.0) + 32);
    }
}

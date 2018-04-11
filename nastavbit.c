#include<stdio.h>
int nastavbity();
int main(){
    int x,y,p,n;
    scanf("%d%d%d%d",&x,&y,&p,&n);
    printf("%d\n",nastavbity(x,y,p,n));
}

int nastavbity(x,y,p,n)
int x,y,p,n;
{
   y &= (~(~0 << n));
   y <<= (p - n + 1);
   x &= ~((~(~0 << n)) << (p - n + 1));
   return x | y;
}

#include<stdio.h>
int prectibit(int x, int p, int n);
int main(){
    
}

int prectibit(int x, int p, int n)
{
return (x >> (p - n + 1) & ~(~0 << n));    
}

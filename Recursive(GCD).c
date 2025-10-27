#include<stdio.h>

int gcd(int a,int b)
{

    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{   int a=30, b=25;
    printf("GCD of %d and %d= %d\n", a, b, gcd(a, b));
    return 0;
}

#include<stdio.h>

void main()
{
    int factorialofno(int);
    printf("%d", factorialofno(3));

}
int factorialofno(int n)
{
    if (n==1)
        return 1;
    else
        return(n*factorialofno(n-1));

}

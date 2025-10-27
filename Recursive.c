#include<stdio.h>

void main()
{
    int sumofno(int);
    printf("%d", sumofno(3));
}
int sumofno(int n)
{
    return(n + sumofno(n-1));

}

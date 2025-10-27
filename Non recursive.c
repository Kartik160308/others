#include<stdio.h>

void main()
{
    int sumofno(int);
    printf("%d", sumofno(3));
}
int sumofno(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+i;
    return s;

}

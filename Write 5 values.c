#include<stdio.h>
void main()

{
    int a[5],i;
    printf("Enter Five Values:");
    for(i=0;i<=4;i++)
    scanf("%d", &a[i]);
    printf("You entered: ");
    for(i=0;i<=4;i++)
    printf("%d ", a[i]);


}

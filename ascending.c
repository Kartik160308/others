#include<stdio.h>
void main()
{
    int arr[5],i,n=5,j,temp;
    printf("Enter five Numbers:");

    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(i=0;i<=4;i++)
        printf("%d  ",arr[i]);
}

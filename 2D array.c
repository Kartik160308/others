#include<stdio.h>
int main()
{
    int stud[2][3];
    int i,j;
    for(i=0; i<2; i++){
            for(j=0;j<3;j++){
                printf("Enter values of student data[%d][%d]:");
                scanf("%d", &stud[i][j]);
            }
    }
    printf("two dimensional array elements:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d", stud[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

}

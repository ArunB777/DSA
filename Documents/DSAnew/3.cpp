#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *B[3];
    int **c;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",A[i][j]);
        printf("\n");
        }
    
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    
    c=(int **)malloc(3*sizeof(int*));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    printf("enter the values of 1st matrix A: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the values of 2nd matrix B: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("enter the values of  matrix A: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition  of two matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

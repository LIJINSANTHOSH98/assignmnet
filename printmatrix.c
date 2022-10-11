#include <stdio.h>
void main ()
{
    int a[2][4],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n printing the elements ....\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}

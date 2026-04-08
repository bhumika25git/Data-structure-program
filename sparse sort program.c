#include<stdio.h>
int main()
{
    int matrix[10][10],sparse[20][3];
    int i,j,row ,cols,k=1;
    printf("enter rows and columns:");
    scanf("%d %d",&rows,&cols);
    printf("enter matrix elements:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);

        }

    }
    //count non zero elements
    for(i=0;i<rows;i++)
    {
        for(j=0;j,cols;j++)
        {
            if(matrix[i][j]!=0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=matrix[i][j];
                k++;

            }
        }
    }
    // display

    printf("\nsparse matrix representation:\n");
    printf("row col value\n");
    for(i=0;i<k;i++)
    {
        printf("%d %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }
    return 0;
    
}
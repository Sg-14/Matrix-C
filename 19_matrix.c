// Program to print a matrix

# include <stdio.h>

int main()
{
    int i,j,m,n;
    int matrix[10][20];

    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);

    // Taking the elemnts as input

    for (i = 1; i<=m; i++)
    {
        for (j = 1; j<=n; j++)
        {
            printf("Input the element for [%d] row and [%d] column: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    // To print the matrix
    for (i=1; i<=m; i++)
    {
        for (j=1;j<=n; j++)
        {
            printf("\t%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
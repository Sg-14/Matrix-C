// Program to find transpose of given matrix

# include <stdio.h>

int main()
{
    int i,j,m,n;
    int matrix[10][10];
    int transpose[10][10];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    // Elements of the matrix
    printf("Enter the elements of matrix");
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
    // Transpose of the matrix
    printf("The Transpose of the matrix is: \n");
    for (i=1; i<=m; i++)
    {
        for (j=1;j<=n; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }

    for (i = 1; i <=m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("\t%d  ",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

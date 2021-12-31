
# include <stdio.h>

void add(int m1,int m2);

// Program to add two matrices

int main()
{
    int i,j,m,n;
    int matrix[10][20];

    printf("Enter the number of rows : ");
    scanf("%d",&m);
    printf("Enter the number of columns : ");
    scanf("%d",&n);

    // Taking the elemnts as input
    printf("Enter the elements of 1st matrix");
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

    int matrix_2[10][20];

    // Taking the elemnts as input
    printf("Enter the elements of 2nd matrix");
    for (i = 1; i<=m; i++)
    {
        for (j = 1; j<=n; j++)
        {
            printf("Input the element for [%d] row and [%d] column: ",i,j);
            scanf("%d",&matrix_2[i][j]);
        }
    }
    // To print the matrix
    for (i=1; i<=m; i++)
    {
        for (j=1;j<=n; j++)
        {
            printf("\t %d  ",matrix_2[i][j]);
        }
        printf("\n");
    }
    printf("\nThe addition of the two matrices gives: \n");
    int AddMatrix[10][20];
    for (i = 1; i<=m; i++)
    {
        for (j = 1; j<=n; j++)
        {
            AddMatrix[i][j]=matrix[i][j]+matrix_2[i][j];
        }
    }
    for (i=1; i<=m; i++)
    {
        for (j=1;j<=n; j++)
        {
            printf("\t %d  ",AddMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

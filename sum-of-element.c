#include <stdio.h>

int main()
{

    int rows, cols;

    printf("Enter rows of an array");
    scanf("%d", &rows);

    printf("Enter collum of an array");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter element of array\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Here Your Array !!!\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Rows Sum

    int rowNo;
    int rowSum = 0;

    printf("\nEnter Row number:\n");
    scanf("%d", &rowNo);

    printf("Element of row %d: ", rowNo);

    for (int j = 0; j < cols; j++)
    {
        printf("%d ", arr[rowNo][j]);
        rowSum = rowSum + arr[rowNo][j];
    }

    printf("\n The sum of a row %d : %d\n", rowNo, rowSum);

    // Rows Sum

    int colNo;
    int colSum = 0;

    printf("\nEnter column number:\n");
    scanf("%d", &colNo);

    printf("Element of column %d: ", rowNo);

    for (int i = 0; i < rows; i++)
    {
        printf("%d ", arr[i][colNo]);
        colSum = colSum + arr[i][colNo];
    }

    printf("\n The sum of a column %d : %d\n", colNo, colSum);

    return 0;
}

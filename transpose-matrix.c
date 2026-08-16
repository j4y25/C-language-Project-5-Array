#include <stdio.h>

int main()
{

    int rows, cols;

    printf("Enter rows of an array");
    scanf("%d", &rows);

    printf("Enter column of an array");
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

    printf("\nThe transpose matrix of an array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
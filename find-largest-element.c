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
            printf("arr[%d][%d] =", i, j);
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

    int largest = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    printf("The Largesrt element in Array is : %d\n", largest);

    return 0;
}
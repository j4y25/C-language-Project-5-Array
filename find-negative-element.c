#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Element of Array\n");
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Here Your Array !!!\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }

    printf("Negative element from an Array:");

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    return 0;
}

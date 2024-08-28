#include <stdio.h>
int main()
{

    int r, c;

    printf("Enter a size of row : ");
    scanf("%d", &r);
    printf("Enter a size of column : ");
    scanf("%d", &c);

    int arr[r][c], max;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a element of array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    max = arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    printf("The large value is %d",max);

    return 0;
}
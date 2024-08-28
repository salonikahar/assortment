#include<stdio.h>
int main(){

    int r;

    printf("Enter a size of row & column : ");
    scanf("%d", &r);

    int arr[r][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter a element of array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
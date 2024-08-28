#include <stdio.h>
int main()
{

    int r, c, sum;

    printf("Enter a size of row : ");
    scanf("%d", &r);
    printf("Enter a size of column : ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a element of array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int rn,cn;
    int rsum = 0, csum = 0;
    printf("Enter row number: ");
    scanf("%d", &rn);

    if (rn > -1 && r >= rn)
    {
        printf("\nRow %d: ", rn);
        rsum = 0;
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[rn][j]);
            rsum += arr[rn][j];
        }
        printf("\nSum of row %d: %d\n", rn, rsum);
    }
    else
    {
        printf("Invalid row number");
    }

    printf("Enter column number: ");
    scanf("%d", &cn);

    if (cn > -1 && c >= cn)
    {
        printf("\nColumn %d: ", cn);
        rsum = 0;
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][cn]);
            csum += arr[j][cn];
        }
        printf("\nSum of column %d: %d\n", cn, csum);
    }
    else
    {
        printf("Invalid column number");
    }
    return 0;
}
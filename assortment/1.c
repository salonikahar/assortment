// Negative Elements in 1D Array
#include<stdio.h>
int main(){

    int s;

    printf("Enter a size of array");
    scanf("%d",&s);

    int arr[s];

    for (int i=0; i<s; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d",&arr[i]);
    }

    printf("\n");
    printf("\n");


    for(int i=0; i<s; i++)
    {
        if(arr[i]<0)
        {
            printf("\n negative value :");
            printf(" %d",arr[i]);
        }

    }

    return 0;
}

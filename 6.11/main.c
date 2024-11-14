#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[],int n)
{
    int i,j,x;

    for(i=0;i < n-1;i++)
    {
        x = 0;

        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                x = 1;
            }
        }

        if(x == 0)
        {
            break;
        }
    }
}

int main()
{
    int array[10];
    int i;

    printf("Please enter 10 integers:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&array[i]);
    }

    bubbleSort(array,10);

    printf("The result for bubble sort is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

    return 0;
}

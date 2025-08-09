#include <stdio.h>
void miniMaxSum(int arr[])
{
    long total=0;
    int min = arr[0],max=arr[0];

    for(int i=0;i<5;i++)
    {
        total+=arr[i];
        if(arr[i]<min)min=arr[i];
        if(arr[i]<max)max=arr[i];
    }

    long minSum=total-max;
    long MaxSum=total-min;

    printf("%d%d\n",minSum,maxSum);
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    miniMaxSum(arr);

    return 0;
}
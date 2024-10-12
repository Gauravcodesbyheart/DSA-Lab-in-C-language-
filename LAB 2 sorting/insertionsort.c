#include <stdio.h>
void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;
    while (j>=0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    }
}
int main()
{   
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unsorted array:\n");
    for (int i=0; i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nSorted array:\n");
    insertion_sort(arr,n);
    for (int i=0; i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
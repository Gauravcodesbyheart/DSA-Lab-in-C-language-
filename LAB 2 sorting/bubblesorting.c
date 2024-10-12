#include <stdio.h>
void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array:\n");
    print_array(arr,n);
    printf("Sorted array:\n");
    bubble_sort(arr,n);
    print_array(arr,n);
    return 0;

}
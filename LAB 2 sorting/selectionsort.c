#include <stdio.h>
void selection_sort(int arr[], int n)
{
    int i, j, minindex,temp;
    for (i = 0; i < n; i++)
    {
        minindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
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
    selection_sort(arr,n);
    printf("Sorted array:\n");
    print_array(arr,n);
    return 0;

}
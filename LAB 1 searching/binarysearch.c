#include <stdio.h>
int binary_search(int a[],int n,int key)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key<a[mid]){
            high = mid-1;
        }
        else {
            low = mid+1;
        }

    }
    return -1;
    
}
int main ()
{
    int a[10],n,key;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i=0; i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are:\n");
    for (int i=0;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("Enter the item you want to search:\n");
    scanf("%d",&key);
    int p = binary_search(a,n,key);
    if (p==-1){
        printf("Item not found");
    }
    else{
        printf("Item found at loaation %d",p);
    }
    return 0;


}
#include <stdio.h>
int linear_search(int a[],int n, int k)
{
    for (int i=0; i<n;i++)
    {
        if (a[i] ==k)
        {
        return i;                        
        }
        return -1;
    }
}
int main ()
{
    int a[10],n,key;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for (int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are\n");
    for (int i=0; i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nEnter the item to be searched:\n");
    scanf("%d",&key);
    int p = linear_search(a,n,key);
    if(p==-1)
    {
        printf("ITEM NO FOUND");
    }
    else
    {
        printf("ITEM FOUND");
    }
    return 0;

}
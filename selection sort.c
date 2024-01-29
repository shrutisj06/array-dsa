#include<stdio.h>
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
               {

            int temp=arr[min];
            arr [min]=arr[j];
            arr[j]=temp;
               }
        }
    }

}

void main()
{
    int arr[]={5,6,8,9,7};
    int n=5;
    selection_sort(arr,n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

#include<stdio.h>

void reverse( int arr[],int n)
  {
  for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}

void rotate (int arr[],int n ,int d)
{
  d=d%n;
   reverse (arr,0,d-1);
   reverse (arr,d,n-1);
   reverse (arr,0,n-1);
}

   void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    }


    void main()
    {
    int arr[]={1,2,3,4,5,60};
    int n = 6;
    int d =13;
    rotate(arr,n,d);

   {printArray(arr,n);

   } }

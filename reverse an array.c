#include<stdio.h>
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
   // int n=9;

   // for(int i=0;i<n;i++)
   // {
      //  arr[i]=arr[n-i];


   // }

    for(int i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}

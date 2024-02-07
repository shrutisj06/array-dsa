#include<stdio.h>
void main()
{ int max=0; //to find the max element so we can make new array acc. tp it
int arr[]={3,1,9,7,2,1,4};
int n=7;
for(int i=0;i<n;i++)
{

if (arr[i]>max)
{
 max=arr[i];
}
 }
 //make new count array size=max value
 int arr2[max+1];
 for(int i=0;i<=max;i++)
 {
     arr2[i]=0;
 }
 for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
  for (int i = 0; i <= max; i++)
    {
        while (arr2[i] > 0)
        {
            printf("%d ", i);
            arr2[i]--;
        }
}
}

#include<stdio.h>
void insertion_sort(int arr[],int n)
{ for(int i=1;i<n;i++)
{
  int temp=arr[i];
  int j=i-1;
  while(arr[j]>temp&& j>=0)
  {
   arr[j+1]=arr[j];
   j--;}
   arr[j+1]=temp;
  }}

  void main()
  {
  int arr[]={5,6,8,9,4};
  int n=5;
  insertion_sort(arr,n);
   for(int i=0;i<n;i++)

  {
   printf("%d \n",arr[i]);
   }
  }

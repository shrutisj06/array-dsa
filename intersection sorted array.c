#include<stdio.h>
void main()
{
int arr1[]={1,2,3,4,5};
int arr2[]={3,6,7,8,9};
int n1=5;
int n2=5;
int i=0;
int j=0;

while(i<n1 && j<n2)
{
  if(arr1[i]<arr2[j])
  {
  i++;
  }
  else if ( arr1[i]>arr2[j])
  { j++;
  }
  else
  { printf("%d",arr1[i]);
  i++;
  j++;}}
}

#include<stdio.h>
int search( int arr[],int n ,int x)
{

for(int i=0;i<n;i++)
  {if (arr[i]==x)
  return i;
  }
  return -1;
  }

  int main()
  {
  int arr[6]={1,2,3,4,5,6};
  int n=6;
  int x=11;

  int index = search(arr, n, x);
  if (index !=-1)
  {
  printf ("the element %d is found at%d", x,index);
  }
  else
  {
  printf("the element %d is not found",x);}
  }

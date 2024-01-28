#include<stdio.h>
void main()
{
 int arr[6]= {3,1,8,4,9,0};

  for(int i=0;i<6;i++)
  {
  for(int j=i+1;j<6;j++)
  {
   if(arr[i]>arr[j])
   {
   int a= arr[i];
   arr[i]=arr[j];
   arr[j]=a;}
   }}
   printf("the elements are ");
   for(int i=0;i<6;i++)
   { printf("%d\n",arr[i]);

   }

  }

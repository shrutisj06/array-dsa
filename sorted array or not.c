#include<stdio.h>
void main()
{
 int arr[7]= {1,2,3,4,5,6,7};

 for(int i=0;i<6;i++)
 {
 if (arr[i]>arr[i+1])
 { printf("false\n");

 break;}

  if (i==5)
 {printf("true\n");
 }
 }
 }


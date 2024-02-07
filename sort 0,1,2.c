#include<stdio.h>
void main()
{
int arr[]={1,2,0,0,0,1,2,2,1,1};
int n=10;
int i;

int arr2[3];

for(i=0;i<3;i++)
{arr2[i]=0;
}

for(i=0;i<n;i++)
{
 arr2[arr[i]]++;
 }

for(i=0;i<3;i++)
{         while (arr2[i] > 0)
{printf("%d ",i);
arr2[i]--;
}
}
}

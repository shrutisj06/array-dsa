#include<stdio.h>
void main()
{

 int a[]={1,5,6,7,9,3};
 int target=12;
 int n=6;
 int i;
 int j;
 int found=0;
 for( i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if (a[i]+a[j]==target)
  {
      printf("%d and %d target is achieved\n",a[i],a[j]);
        found=1;
  }

  }
 }
 if (found !=1)
 {
     printf("the target is not found");
 }
}

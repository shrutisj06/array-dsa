#include<stdio.h>
void main()
{
int arr[6]= {1,1,3,5,5,6};
   int j=0;
 for(int i=1;i<6;i++)
 { if (arr[i] != arr[j])

     {
     arr[j+1]=arr[i];
    j++; }

}
  for (int i = 0; i <= j; i++) {
        printf("%d \n", arr[i]);
    }

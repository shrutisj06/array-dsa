#include<stdio.h>
void main()
{
    int arr[6]={1,2,3,4,5,6};
    int a=arr[0];
    for(int i=0;i<6;i++)
    {
        arr[i]=arr[++i];

    }

//{  arr[5]=a;
//}
{
    for(int i=0;i<6;i++)

{printf("the rotated elements are %d \n",arr[i]);
}
}
}

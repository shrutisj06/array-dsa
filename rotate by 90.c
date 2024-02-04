#include<stdio.h>
void main()
{

int arr[10][10]={{1,2,3},{4,5,6},{7,8,9}};
int row=3;
int column=3;
for(int i=0;i<row;i++)
{
    for(int j=i;j<column;j++)   //transpose
    {
       int temp= arr[i][j];
       arr[i][j]=arr[j][i];
       arr[j][i]=temp;
    }
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<column/2;j++)
    { int temp=arr[i][j];
    arr[i][j]=arr[i][column-1-j];
    arr[i][column-1-j]=temp;
    }

}
for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}






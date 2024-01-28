#include<stdio.h>
#include<string.h>
void main()
{
    char strings[][10]={ "red","pink","blue","orange"};
     char *search= "reed";
     int stringfound=0;

     for(int i=0;i<4;i++)
     {
         if (strcmp(strings[i],search)==0)
         {
             printf("the string %s is found at %d \n",search,i);
             stringfound=1;
             break;
         }
     }

     if(!stringfound)
     {
          printf("the string %s is not found",search);
     }
}

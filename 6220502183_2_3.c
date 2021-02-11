#include<stdio.h>

int main()
{
    int z=3,a[z],i,j;
    char s[z];

   for ( i = 0; i < z; i++)
   {
       scanf("%d",&a[i]);
   }

   for ( i = 0; i < z; i++)
   {
       scanf(" %c",&s[i]);
   }
   
   i = 0;
    do
    {
        if(i < z-1 && a[i] > a[i+1])
        {
            j = a[i+1];
           a[i+1] = a[i];
            a[i] = j;
            i = 0;
        }
        else
        {
            i++;
        }
         
    }while(i < z);
   
   
    
}
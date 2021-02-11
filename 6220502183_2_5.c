#include<stdio.h>

int main()
{
    int a,b,z,day;
    scanf("%d %d",&a,&b);

    switch (b)
    {
    case 2:z=28;break;
    case 4 :
    case 6 :
    case 9 :
    case 11: z=30;break;
    default: z=31;break;
    }

    day = (a+z-1)%7+1;
    printf("%d",day);    
}
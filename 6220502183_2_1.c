#include<stdio.h>

int main()
{
    int a,b,c,sum;

    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);

    sum = a+b+c;

    switch (sum)
    {
    case sum >=80:printf("A");break;
    case sum >=75:printf("B+");break;
    case sum >=70:printf("B");break;
    case sum >=65:printf("A");break;
    case sum >=60:printf("A");break;
    case sum >=55:printf("A");break;
    case sum >=50:printf("A");break;
    default:
        break;
    }
}
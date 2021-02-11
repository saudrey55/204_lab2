#include<stdio.h>

int main()
{
    char pro;
    float a,sum;

    scanf("%c",&pro);
    scanf("%f",&a);


    if (pro == 'A')
    {
        a=a-200;
        a=a*3;
        sum=199+a;
    }
    else if (pro == 'B')
    {
       a=a-400;
       a=a*2;
       sum=299+a;
    }
    printf("%.2f",sum);
    
}
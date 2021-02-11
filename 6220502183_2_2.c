#include<stdio.h>

int main()
{
    char pro;
    float a,sum,z,b;

    scanf("%c",&pro);
    scanf("%f",&a);


    if (pro == 'A')
    {
        a=a-200;
        b=(a-(int)a)*100/20;
        a=(int)a*3;
        sum=199+a+b;
    }
    else if (pro == 'B')
    {
       a=a-400;
       a=a*2;
        sum=299+a;
    }
    printf("%.2f",sum);
    
}
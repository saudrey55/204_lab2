#include<stdio.h>

int main()
{
    char pro;
    float a,sum,z,b;

    scanf("%c",&pro);
    scanf("%f",&a);


    if (pro == 'A')
    {
        if(a>200)
        {
        a=a-200;
        b=(a-(int)a)*100/20;
        a=(int)a*3;
        sum=199+a+b;
        }
        else
        {
            sum=199;
        }
    }
    else if (pro == 'B')
    {
        if(a>400)
        {
        a=a-400;
        b=(a-(int)a)*100/30;
        a=(int)a*2;
        sum=299+a+b;
        }
        else
        {
            sum=299;
        }
    }
    printf("%.2f",sum);
    
}
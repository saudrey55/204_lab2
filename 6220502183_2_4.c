#include<stdio.h>

int main()
{
    char name;
    int num,z;

    scanf("%c",&name);
    scanf("%d",&num);
    z=name-num;
    if (z%2 !=0)
    {
        if (z%5 != 0)
        {
           if (name>='A'&&name<='I')
            {
                printf("(^_^)");
            }
            else if (name>='J'&&name<='R')
            {
                printf("(*o*)");
            }
            else if (name>='S'&&name<='Z')
            {
                printf("(T_T)");
            }
        }
        
        else if (z%5 ==0)
        {
            if (name>='A'&&name<='I')
            {
                printf("%c(^_^)%c",92,47);
            }
            else if (name>='J'&&name<='R')
            {
                printf("%c(*o*)%c",92,47);
            }
            else if (name>='S'&&name<='Z')
            {
                printf("%c(T_T)%c",92,47);
            }
        }
    }
    else if (z%2==0)
    {
        if (name>='A'&&name<='I')
            {
                printf("{@_@}");
            }
            else if (name>='J'&&name<='R')
            {
                printf("{*v*}");
            }
            else if (name>='S'&&name<='Z')
            {
                printf("{x_x}");
            }
    }    
}
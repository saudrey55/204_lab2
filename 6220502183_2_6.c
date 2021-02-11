#include<stdio.h>
#include<string.h>

int main()
{
    char a[10][6]={"Zero","One","Two","Three", "Four","Five","Six","Seven", "Eight", "Nine"};
    
    char n[1000002];

    gets(n);

    printf("%s",a[n[0]]);
    int i;
    for ( i = 1; i < strlen(n); i++)
    {
         printf("-%s",a[n[i]]);
    }
    


}
#include<stdio.h>
#include<string.h>

int main()
{
    char a[10][6]={"Zero","One","Two","Three", "Four","Five","Six","Seven", "Eight", "Nine"};
    
    char n[1000002];

    scanf("%s",n);

    printf("%s",a[n[0]-'0']);
    int i;
    for ( i = 1; n[i]!='\0' ; i++)
    {
         printf("-%s",a[n[i]-'0']);
    }
    


}
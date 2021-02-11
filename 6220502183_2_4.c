#include<stdio.h>
#include<string.h>

int main()
{
    int BD,think;
    char alpha;
    char emo[2][3][6] = {{"(^_^)","(*o*)","(T_T)"},{"{@_@}","{*v*}","{x_x}"}};
    char choose[6];
    scanf("%c",&alpha);
    scanf("%d",&BD);

    think = alpha+1-BD;
    if(alpha>='A' && alpha<='I')
        strcpy(choose,emo[think%2][0]);
    else if(alpha>='J' && alpha<='R')
        strcpy(choose,emo[think%2][1]);
    else
        strcpy(choose,emo[think%2][2]);

    if(BD%10==5)
        printf("%c%s/\n",92,choose);
    else
        puts(choose);

    return 0;
}
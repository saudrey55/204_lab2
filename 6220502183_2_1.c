#include<stdio.h>

int main()
{
    int a,b,c,grade;

    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);

    grade= a+b+c;

    if (grade >= 80) 
    {
    printf("A");
    } 
    else  if (grade >= 75) 
    {
    printf("B+");
    } 
    else  if (grade >= 70) 
    {
    printf("B");
    } 
    else  if (grade >= 65) 
    {
    printf("C+");
    } 
    else  if (grade >= 60) 
    {
    printf("C");
    } 
    else  if (grade >= 55) 
    {
    printf("D+");
    } 
    else  if (grade >= 50) 
    {
    printf("D");
    } 
    else
    {
        printf("F");
    }
    
}
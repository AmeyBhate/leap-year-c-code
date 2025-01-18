#include<stdio.h>
int main()
{
    int a,r;
    printf("Enter the year: ");
    scanf("%d",&a);
    r=a%4;
    if(r==0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not leap year");
    }
}
#include<stdio.h>
int main()
{
    int a,b,i,power=1;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d",power);
    
    return 0;
}

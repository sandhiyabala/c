#include<stdio.h>
int main()
{
    int a,b,i,power=1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d",power);
    
    return 0;
}

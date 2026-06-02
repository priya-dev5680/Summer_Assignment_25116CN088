#include <stdio.h>
int main()
{
    int num,prod=1,rem,n;
    printf("enter a number:");
    scanf("%d",&num);
    n=num;

    while(num!=0)
    {
        rem=num%10;
        prod*=rem;
        num/=10;
    }
    printf("the product of digits of %d is %d",n,prod);
    return 0;
}
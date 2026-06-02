#include<stdio.h>
int main()
{
    int num,sum=0,rem,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;

    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("the sum of digits of %d is %d",n,sum);
    return 0;

}
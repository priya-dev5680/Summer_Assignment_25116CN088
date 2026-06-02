#include <stdio.h>
int main()
{
    int num,rev=0,rem,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==n)
    {
        printf("%d is a palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    }
    return 0;
}
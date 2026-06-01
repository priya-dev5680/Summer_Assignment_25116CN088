#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("please enter the number upto which you want the sum:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum upto %d is %d",num,sum);
    return 0;
}

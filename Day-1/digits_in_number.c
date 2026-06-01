#include <stdio.h>
int main()
{
    int num,i,count=0;
    printf("enter number:");
    scanf("%d",&num);
    i=num;

    while(num>0)
    {
        num=num/10;
        count+=1;
    }
    printf("number of digits in %d are %d",i,count);
    return 0;
}
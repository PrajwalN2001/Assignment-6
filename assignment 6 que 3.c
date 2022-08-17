#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the natural number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(2*i+1);
    }
    printf("the sum is %d",sum);
    return 0;
}

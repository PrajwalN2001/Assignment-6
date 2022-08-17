#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the natural number");
    scanf("%d",&n);
    while(1)
    {
        if(n!=0)
            {
                count++;
                n=n/10;
            }
            else
            {
                break;
            }
    }
    printf("total digit is %d",count);
    return 0;
}


#include<stdio.h>
int main()
    {
        int i,num,value,sum=0;
        printf("enter the value");
        scanf("%d",&num);
        for(i=1;num>=1;i++)
            {
                value=num%10;
                sum=sum*10+value;
                num=num/10;

            }
        printf("reverse number is %d",sum);
        return 0;
    }

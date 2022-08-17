#include<stdio.h>
int main()
{
    int num,i;
    printf("enter any number");
    scanf("%d",&num);
    if(num==2)
        printf("NUMBER IS PRIME");
    else if(num%2==0 || num==1)
        printf("NUMBER IS NOT PRIME");
    else
        for(i=2;i<num;i++)
            {
                if(num%i==0)
                {
                    printf("NUMBER IS NOT PRIME");
                    break;
                }
            }
        if(num==i)
            printf("NUMBER IS PRIME");
    return 0;
}

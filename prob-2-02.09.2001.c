
#include<stdio.h>
int process(int x);
void main()
{
    int x,r;
    printf("Enter a number:");
    scanf("%d",&x);
    r=process(x);
    printf("\nThe result is:%d",r);
}
int process(int x)
{ int sum=0,s;
    while(x>0)
    {
        s=x%10;
        sum+=s;
        x=x/10;

    }
    if(sum>9)
    {
        sum=process(sum);
    }
    return sum;
}

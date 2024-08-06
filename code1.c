#include<stdio.h>
void format(int n)
{
    while(n!=1)
    {
        printf("%d\t",n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
    }
    printf("1\n");
}
int main()
{
    int n;
    printf("enter a positive number:");
    scanf("%d",&n);
    if(n<1||n>1000000)
    {
        printf("please enter a valid number");
        return 1;
    }
    format(n);
    return 0;
}
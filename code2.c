#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("enter upper limit:");
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        if(i%3==0||i%5==0){
            sum=sum+i;
            
        }

    }
    printf("the sum is:%d",sum);
    return 0;

}
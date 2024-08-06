#include<stdio.h>

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}

int nCr(int n,int r)
{
    int den ,num;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;

}

int main()
{
    printf("%d",nCr(5,2));
    return 0;
}
#include <stdio.h>

int power(int m,int n)
{
  if(n==0)
  return 1;
  else
  return power(m,(n-1))*m;
}

int main()
{
    int m,n;
    printf("enter value of m:");
    scanf("%d",&m);
    printf("enter value of n:");
    scanf("%d",&n);
    int r=power(m,n);
    printf("%d",r);
}
#include <stdio.h>

int sum(int n)
{
  if(n==0)
  return 0;
  else
  return sum(n-1)+n;
}

int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int r=sum(n);
    printf("%d",r);
}
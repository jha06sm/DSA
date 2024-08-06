#include<stdio.h>
int movie(int start[],int end[],int n)
{
    int count=1;
    int endtime=end[0];
    for(int i=1;i<n;i++)
    {
        if(start[i]>=endtime)
        {
            count++;
            endtime=end[i];
        }
    }
    return count;
}
int main()
{
    int start[]={3,4,5};
    int end[]={5,9,8};
    int n=sizeof(start)/sizeof(start[0]);
    int max=movie(start,end,n);
    printf("maximum number of movies you can watch:%d",max);
    return 0;
}
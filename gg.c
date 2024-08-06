#include<stdio.h>
    
int main()
{
    float start[]={9,9.5,12.3,3,6};
    float end[]={12,12.5,3.3,6,9};
    int n=sizeof(start)/sizeof(start[0]);
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
    printf("maximum number of movies you can watch is %d",count);
    return 0;
}

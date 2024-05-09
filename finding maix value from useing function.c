#include<stdio.h>
int maximum(int x[])
{
    int i=0;
    int max=x[0];
    for(i=0; i<6; i++)
    {
       if(max<x[i])
        max = x[i];
    }
    return max;
}
int main()
{
    int num[]={10,20,30,40,50,-15};
    int maximumvalue=maximum(num);
    printf("maximum=%d\n",maximumvalue);
}


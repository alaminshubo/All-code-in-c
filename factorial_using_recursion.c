#include<stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    int result= fact(num);
    printf("Factorial : %d",result);
}
int fact(int n)
{
    if(n==1)

    return 1;

    else
        return n*fact(n-1);
}


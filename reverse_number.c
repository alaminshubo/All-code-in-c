#include<stdio.h>
int main(){
    int r,b=0, num;
    printf("enter the number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%10;
        b=b*10+r;
        num/=10;
    }
    printf("revere number :%d\n ",b);
    return 0;
}

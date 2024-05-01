#include<stdio.h>
int main(){
    int n,r,b=0,temp;
    printf("enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(temp==b)
    {
        printf("pallindrom number.\n",temp);
    }
    else{
            printf("not pallindrom number.\n",temp);
    }
    return 0;
}


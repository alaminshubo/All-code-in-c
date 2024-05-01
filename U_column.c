#include<stdio.h>
int main(){
    int n,row,col;
    printf("enter the Value : ");
    scanf("%d",&n);
    for (row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n",col);
    }
    return 0;
}

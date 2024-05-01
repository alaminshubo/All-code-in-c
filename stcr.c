#include<stdio.h>
int main(){
int a[4];
int *ptr;
int i,j;
ptr=&a;
for(i=0; i<4; i++)
{
    printf("input array%d    ",i+1);
    scanf("%d",ptr);
    ptr++;
}
    ptr= a;
printf("array elements:");
for(j=0; j<4; j++)
{
    printf("\n%d",*ptr);
    ptr++;
}
getch();
}




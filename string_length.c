#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter string : ");
    scanf("%s",&str);
    int length = strlen(str);
    printf("length of a string %d\n",length);
}

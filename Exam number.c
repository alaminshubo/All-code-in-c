#include<stdio.h>
int main(){
    int num;
    printf ("Enter the number : ");
    scanf("%d",&num);
    if (100<=num)
    {
        prinf("Error");
    }
    else if (80<=num)
    {
        printf ("A+");
    }
    else if (70<=num)
    {
        printf ("A");
    }
    else if (65<=num)
    {
        printf ("A-");
    }
    else if (60<=num)
    {
        printf ("B");
    }
    else if (50<=num)
    {
        printf ("C");
    }
    else if (40<=num)
    {
        printf ("D");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int year;
    printf("Enter The Year : " );
    scanf("%d",& year);
    if(year%4==0 && year%100!=0)
    {
        printf("The year is a leap year");

    }
    else if (year %400 == 0 )
    {
        printf ("The Year is a leap year");

    }
    else
    {
        printf("The Year is not leap year");
    }
    return 0;

}

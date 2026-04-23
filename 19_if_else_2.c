// write a program to findout given year is millilannum year not
#include <stdio.h>
void main()
{
    int year,reminder;
    printf("Enter year");
    scanf("%d",&year);
    reminder = year%1000;
    if(reminder==0)
    {
        printf("given year is millilannum year");
    }
    else 
    {
        printf("given year is not millilannum year");
    }
}
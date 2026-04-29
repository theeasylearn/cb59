/*
    write a program to findout which person is elder person in two person from given birth dates

    input:
        1st person birthdata (day,month,year)
        2nd person birthdata (day,month,year)
    process
        1st compare year
            then compare month
                then compare day
*/
#include <stdio.h>
void main()
{
    int year1, year2, month1, month2, day1, day2;

    printf("Enter first person's birthdate (DD MM YYYY): ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter second person's birthdate (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &month2, &year2);

    if (year1 > year2)
    {
        printf("2nd person is elder person");
    }
    else if (year1 == year2)
    {
        if (month1 > month2)
        {
            printf("2nd person is elder person");
        }
        else if(month1 == month2)
        {
            if(day1>day2)
            {
                printf("2nd person is elder person");
            }
            else if(day1 == day2)
            {
                printf("both person are of same age");
            }
            else 
            {
                printf("1st person is elder person");
            }
        }
        else 
        {
             printf("1st person is elder person");
        }
    }
    else
    {
        printf("1st person is elder person");
    }
}
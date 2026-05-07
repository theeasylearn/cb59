// write a program to findout given 3 digit number is armstrong number or not
#include <stdio.h>
void main()
{
    int number = 153, reminder, total = 0, original_number;

    printf("Enter number");
    scanf("%d", &number);
    if (number < 100 || number>999)
    {
        printf("it is not armstrong number");
    }
    else
    {
        original_number = number; // 153
        do
        {
            reminder = number % 10;
            reminder = reminder * reminder * reminder;
            total = total + reminder;
            number = number / 10;
        } while (number > 0);

        if (original_number == total)
        {
            printf("given number is armstrong number");
        }
        else
        {
            printf("given number is not armstrong number");
        }
    }

    // 125
}
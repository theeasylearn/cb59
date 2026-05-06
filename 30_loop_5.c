/*
    write a program to display multiplication table of given number
    number = 5
    multiplication
    5 x 1 =   5
    5 x 2 =  10
    5 x 3 =  15
    5 x 4 =  20
    5 x 5 =  25
    5 x 10 = 50
*/
#include <stdio.h>
void main()
{
    int number, multiplier, answer;

    printf("enter number to display multiplication table");
    scanf("%d", &number);
    for (multiplier = 1; multiplier <= 10; multiplier = multiplier + 1)
    {
        answer = number * multiplier;
        printf("%d X %d = %d \n", number, multiplier, answer);
    }
}
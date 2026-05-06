/*
    write a program to findout factorial of given number
    number = 5
    process = 5 x 4 x 3 x 2 x 1
    output = 120
*/
#include <stdio.h>
void main()
{
    int number = 5, factorial;
    printf("enter number to get factorial");
    scanf("%d", &number);
    for (factorial = 1; number > 0; number = number - 1)
    {
        factorial = number * factorial;
    }
    printf("\n %d", factorial);
}
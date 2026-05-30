#include <stdio.h>
// write a program to convert decimal number into binary number
// reminder  1 1 1
void DecimalToBinary(int num)
{
    int reminder;
    if (num > 0)
    {
        reminder = num % 2;
        num = num / 2;
        DecimalToBinary(num); //recursion
        printf("%5d", reminder);
    }
}
void main()
{
    int num = 30;
    DecimalToBinary(num);
}
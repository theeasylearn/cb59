// write a program to swap digits of variable which has value less then <100
// input : 35 output 53
// input : 19 output 91
#include <stdio.h>
void main()
{
    int num, first, last;
    printf("Enter number");
    scanf("%d", &num); // 91

    last = num % 10;  // 1
    first = num / 10; // 9
    // last first
    num = (last * 10) + first;
    printf("\n num = %d", num);
}
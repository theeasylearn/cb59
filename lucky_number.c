// write a program to lucky number from birthdate
// input : 12  process 1 + 2 = output 3
#include <stdio.h>
void main()
{
    int num, first, last;
    printf("Enter number");
    scanf("%d", &num); // 91

    first = num / 10;
    last = num % 10;

    num = last + first;
    printf("\n your lucky number is %d", num);
    
}
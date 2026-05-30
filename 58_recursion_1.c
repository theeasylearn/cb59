#include <stdio.h>
// write  a program to print 10 to 1 using recursion
void printNumber(int i)
{
    if (i >= 1)
    {
        printf("%d\n", i);
        i = i - 1; // 9
        printNumber(i); //recursion
    }
}
void main()
{
    int i = 10;
    printNumber(i); //1st time function call
}
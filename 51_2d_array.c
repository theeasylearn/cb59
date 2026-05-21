// write a program to store data in 2d array, display it & process it
/*
    write a program to store restaurant sales data(no of dish) of 4 items for 7 days.
*/
#include <stdio.h>
// #how to create read only variable (constant)
#define ITEM 2
#define DAYS 7
void main()
{
    // 2d array (row)(column)
    int sales[ITEM][DAYS], total = 0;

    for (int row = 0; row < ITEM; row++) // outer loop
    {
        for (int column = 0; column < DAYS; column++) // inner loop
        {
            printf("enter %d dish %d day  sales data ", row + 1, column + 1);
            scanf("%d", &sales[row][column]);
        }
    }

    for (int row = 0; row < ITEM; row++) // outer loop
    {
        for (int column = 0; column < DAYS; column++)
        {
            printf("%7d", sales[row][column]);
            total = total + sales[row][column];
        }
        printf("%7d \n", total);
        total = 0;
    }
}
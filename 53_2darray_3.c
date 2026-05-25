// matrix addition
#include <stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    int a[ROW][COLUMN] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32}};
    int b[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int c[ROW][COLUMN];

    for (int r = 0; r < ROW; r++)
    {
        for (int col = 0; col < COLUMN; col++)
        {
            c[r][col] = a[r][col] + b[r][col];
        }
    }

    // display
    for (int r = 0; r < ROW; r++)
    {
        for (int col = 0; col < COLUMN; col++)
        {
            printf("%10d", c[r][col]);
        }
        printf("\n"); //new line
    }
}
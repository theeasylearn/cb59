#include <stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    float weight[3][3] = {
        {75.22, 65.89, 58.44},
        {45.25, 74.96, 96.23},
        {52.19, 99.44, 39.99}};
    float max = weight[0][0];
    // findout maximum weight (findout maximum value)

        for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COLUMN; c++)
        {
            if (weight[r][c] > max)
                max = weight[r][c];
        }
    }

    printf("%f", max);
}
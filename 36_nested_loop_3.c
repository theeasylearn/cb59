/*
    write a program to print following pattern
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
*/
#include <stdio.h>
void main()
{

    int count = 5;
    for (int line = 1; line <= 5; line = line + 1) // outer loop
    {
        for (int astrik = 1, count = 5; astrik <= line; astrik = astrik + 1) // inner loop
        {
            printf("%d ",count);
            count = count - 1;
        }
        printf("\n"); // new line
    }
}
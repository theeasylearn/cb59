/*
    write a program to print following pattern
    1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5 
*/
#include <stdio.h>
void main()
{

    for (int line = 1; line <= 5; line = line + 1) //outer loop
    {
        for (int astrik = 1; astrik <= line; astrik = astrik + 1) //inner loop
        {
            printf("%d ",astrik);
        }
        printf("\n"); // new line
    }
}
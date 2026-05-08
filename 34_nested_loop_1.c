/*
    write a program to print following pattern
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include <stdio.h>
void main()
{

    for (int line = 1; line <= 5; line = line + 1) //outer loop
    {
        for (int astrik = 1; astrik <= line; astrik = astrik + 1) //inner loop
        {
            printf("* ");
        }
        printf("\n"); // new line
    }
}
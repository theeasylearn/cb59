/*
    write a program to print following pattern
    * * * * *
    * * * *
    * * *
    * *
    *
*/
#include <stdio.h>
void main()
{
    int astrik = 1, line = 5;
    do
    {
        while (astrik <= line)
        {
            printf("* ");
            astrik = astrik + 1;
        }
        printf("\n");
        astrik = 1;
        line = line - 1;
    } while (line >= 1);
}
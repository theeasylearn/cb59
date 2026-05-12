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
    int space = 1, count = 1;
    for (int line = 5; line >= 1; line--)
    {
        while (space <= line)
        {
            printf(" ");
            space++;
        }
        space = 1;
        for (int astrik = 1; astrik <= count; astrik++)
        {
            printf("*");
        }
        count = count + 1;
        printf("\n");
    }
}
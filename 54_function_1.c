#include <stdio.h>
// create function (define)
//  return type function-name(input)
//  without return value without argument(input) function
void PrintLine()
{
    printf("\n");
    for (int count = 1; count <= 100; count++)
    {
        printf("*");
    }
    printf("\n");
}

// without return value with argument(input) function
void PrintLetter(char symbol, int times)
{
    printf("\n");
    for (int count = 1; count <= times; count++)
        printf("%c", symbol);
    printf("\n");
}
void main()
{
    // function execute/run/call/use
    PrintLine();
    printf("The easylearn academy");
    PrintLine();
    PrintLetter('@', 80);
    printf("105, Eva surbhi, opp aksharwadi temple, waghawadi road, bhavnagar");
    PrintLetter('!', 110);
}
#include <stdio.h>
// create function (define)
//  concept of pass by value
void swap(int x, int y) // x = 10 y =5
{
    int temp = x; // temp = 10
    x = y;        // x = 5
    y = temp;     // y = 10
    printf("\n after swap inside function x = %d y = %d \n", x, y);
}
void main()
{
    int x, y;
    printf("Enter value for x");
    scanf("%d", &x);

    printf("Enter value for y");
    scanf("%d", &y);

    printf("\n before function x = %d y = %d", x, y);
    swap(x, y);
    printf("\n after  function x = %d y = %d", x, y);
}
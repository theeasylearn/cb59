#include <stdio.h>
void main()
{
    int a = 10, b = 0;

    printf("before change a = %d b = %d", a, b);
    // b = a;
    // a = a + 1;
    // or
    b = a++;                                      // postfix
    printf("\nafter change a = %d b = %d", a, b); // a = 11 b = 10

    // a = a + 1;
    // b = a;
    // or
    b = ++a; //prefix 

    printf("\nafter another change a = %d b = %d", a, b); // a = 12 b = 12
}
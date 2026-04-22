// example of assignment operators
#include <stdio.h>
void main()
{
    int a = 10, b = 3;
    printf("a = %d b = %d", a, b); // a = 10, b = 3

    // a = a + b;
    //  or
    a += b;
    printf("\n after addition, a = %d b = %d", a, b); // a = 13 b 3

    // a = a - b;
    // or
    a -= b;
    printf("\n after subtraction, a = %d b = %d", a, b); // a = 10 b = 3

    // a = a * b;
    // or
    a *= b;
    printf("\n after multiplication, a = %d b = %d", a, b); // a = 30 b = 3

    // a = a / b;
    //
    a /= b;
    printf("\n after division, a = %d b = %d", a, b); // a = 10, b =3

    // a = a % b;
    //
    a %= b;
    printf("\n after modulus, a = %d b = %d", a, b); // a = 1, b = 3

    // a = a + 1;
    // or
    a += 1;
    printf("\n after increment in a, a = %d b = %d", a, b); // a = 2, b = 3

    // b = b - 1
    b -= 1;
    printf("\n after decrement in b, a = %d b = %d", a, b); // a = 2, b = 2 
}
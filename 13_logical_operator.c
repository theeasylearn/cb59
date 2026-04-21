// example of logical operator in c language
#include <stdio.h>
void main()
{
    // declaration with initialization
    int a = 10, b = 20, c = 10, d = 20, e = 30;

    // variable declaration without initialization
    int result;

    printf("a = %d, b = %d, c = %d, d = %d, e = %d result = %d", a, b, c, d, e, result);

    result = a == c;
    printf("\n %d = %d == %d", result, a, c);

    result = a == b;
    printf("\n %d = %d == %d", result, a, b);

    // there is rule in c language that we must use logical operator (&& and ) or (|| or ) between two relational expression
    // and
    result = a == c && b == d; // 1
    printf("\n %d = %d == %d  and %d == %d", result, a, c, b, d);

    result = a == c && b == e; // 0
    printf("\n %d = %d == %d  and %d == %d", result, a, c, b, d);

    result = a == b && b == d; // 0
    printf("\n %d = %d == %d  and %d == %d", result, a, b, b, d);

    result = a == d && c == e; // 0
    printf("\n %d = %d == %d  and %d == %d", result, a, d, c, e);

    result = a < b || c < d;
    printf("\n %d = %d < %d  ||  %d < %d", result, a, b, c, d);

    result = b < a || c < d;
    printf("\n %d = %d < %d  ||  %d < %d", result, b, a, c, d);

    result = a < d || c > d;
    printf("\n %d = %d < %d  ||  %d > %d", result, a, d, c, d);

    result = a > b || c > d; //0
    printf("\n %d = %d > %d  ||  %d > %d", result, a, b, c, d);


    result = !(a < b);
    printf("\n%d = !(%d < %d)",result,a,b);

    result = !(a > b); // 10 > 20
    printf("\n%d = !(%d > %d)",result,a,b);

}
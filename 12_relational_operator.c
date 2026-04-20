// example of relational operators 
#include<stdio.h>
void main()
{
    //declaration with initialization (create variable and store value in it)
    int a = 10, b = 20, c = 10;
    int result; //if we dont store value in variable, it has garbage (meaning less) value
    //%d is place holder, it depends upon variable's type
    printf("a = %d b = %d, c = %d result = %d",a,b,c,result);

    result = a == c;
    printf("\n %d = %d == %d",result,a,c);

    result = a == b;
    printf("\n %d = %d == %d",result,a,b);

    result = a != b;
    printf("\n %d = %d != %d",result,a,b);

    result = a < b;
    printf("\n %d = %d < %d",result,a,b);

    result = a <= c; 
    printf("\n %d = %d <= %d",result,a,c);

    result = a >= c; 
    printf("\n %d = %d >= %d",result,a,c);

    result = c > a; 
    printf("\n %d = %d <= %d",result,c,a);


}
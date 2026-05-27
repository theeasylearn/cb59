#include <stdio.h>
// create function (define)
//  return type function-name(input)
//  with return value without argument function
float GetPi()
{
    // local variable
    // local variable means variable declared inside function. local variable can be accessed only inside function
    float pi = 22 / 7.0;
    return pi;
}
// with return value with argument function
float GetArea(int radius)
{
    // local variable
    float area;
    float pi = GetPi();
    area = pi * radius * radius;
    return area;
}
void main()
{
    // calling function
    int r;
    float temp = GetPi();
    printf("value of pi = %f", temp);
    // printf("value of pi variable = %f", pi); //this line will not run because we can not access pi variable as it is declared inside GetPi() function

    printf("\nEnter radius");
    scanf("%d", &r);

    temp = GetArea(r);
    printf("area = %.2f", temp);
}
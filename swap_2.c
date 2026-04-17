// write a program to swap value of two variable without 3rd variable
#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter value for a and b");
    scanf("%d %d", &a, &b);
    printf("before swap a = %d b = %d", a, b);

    // a = 10 b = 20
    a = a + b; //30 
    b = a - b; //10
    a = a - b; //20
    printf("\nafter swap a = %d b = %d", a, b);
    // a = 20 b = 10
    
}
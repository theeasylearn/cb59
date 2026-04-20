// write a program to swap value of two variable using 3rd variable
#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter value for a and b");
    scanf("%d %d", &a, &b);
    printf("before swap a = %d b = %d", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("\n after swap a = %d b = %d", a, b);
    
}
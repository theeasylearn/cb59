#include <stdio.h>
void main()
{
    int age;
    float weight;
    char letter;

    printf("enter 1st letter of your name");
    scanf("%c", &letter);

    printf("enter your age");
    scanf("%d", &age);

    printf("enter weight");
    scanf("%f", &weight);

    printf("age = %d", age);
    printf("\n letter = %c", letter);
    printf("\n weight = %f", weight);
}
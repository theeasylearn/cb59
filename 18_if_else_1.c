// write a program to findout which person is taller in 2 person's given height
#include <stdio.h>
void main()
{
    float height1, height2;

    printf("enter 1st person height");
    scanf("%f", &height1);

    printf("enter 2nd person height");
    scanf("%f", &height2);

    if (height1 > height2)
    {
        printf("1st person is taller");
    }
    else
    {
        printf("2nd person is taller");
    }
    
}
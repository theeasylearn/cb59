//write a program to convert meter into foot 
#include<stdio.h>
void main()
{
    float meter,foot;
    printf("Enter meter");
    scanf("%f",&meter);
    //process
    foot = meter / 3.28;
    printf("foot  = %.2f",foot);
}
//write a program to convert user given hours into minutes 
#include<stdio.h>
void main()
{
    //create variable
    float hours,minutes;

    printf("Enter hours");
    scanf("%f",&hours);

    //process 
    //variable-name = variable-name  symbol value/variable-name3
    minutes = hours * 60;

    printf("minutes = %f",minutes);
}
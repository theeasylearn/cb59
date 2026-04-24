/*
    write a program to do following operation on user given 2 number based upon choice
    if choice is 1 then do addition
    if choice is 2 then do subtraction
    if choice is 3 then do multiplication
    if choice is 4 then do division
    otherwise display message invalid choice
*/
#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float answer;

    printf("enter 1st number");
    scanf("%d", &num1);

    printf("enter 2nd number");
    scanf("%d", &num2);

    printf("Press 1 for addition \n Press 2 for subtraction \n Press 3 for multiplication \n Press 4 for division \n enter your choice");
    scanf("%d", &choice);

    if (choice == 1)
    {
        answer = num1 + num2;
        printf("answer of addition = %f", answer);
    }
    else if (choice == 2)
    {
        answer = num1 - num2;
        printf("answer of subtraction = %f", answer);
    }
    else if (choice == 3)
    {
        answer = num1 * num2;
        printf("answer of multiplication = %f", answer);
    }
    else if (choice == 4)
    {
        //type casting (float) num1
        answer = (float) num1 / num2;
        printf("answer of division = %f", answer);
    }
    else
    {
        printf("invalid(wrong) choice");
    }
    printf("\n thank for using our program");
}
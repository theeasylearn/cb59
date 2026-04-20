//write a program to calculate and display simple interest of user given amount,rate,year
#include<stdio.h>
void main()
{
    //variables must be created at begining 
    int amount;
    float rate,year,interest;
    
    printf("Enter amount");
    scanf("%d",&amount);

    printf("Enter rate");
    scanf("%f",&rate);

    printf("Enter year");
    scanf("%f",&year);

    //process
    //variable-name1 = variable-name2 * variable-name3 * variable-name4

    interest = (amount * rate * year) / 100;
    
    printf("Interest = %.2f",interest);

}
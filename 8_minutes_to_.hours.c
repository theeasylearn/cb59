// write a program to convert user given minutes into hours
// minutes : 120 -> hours 2 
// minutes : 150 -> hours 2 minutes 30  
// minutes : 199 -> hours 3 minutes 19
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("enter minutes");
    scanf("%d",&minutes); //199

    //calculate hours 
    hours = minutes / 60;  // 3
    minutes = minutes % 60; //19

    printf("hours = %d",hours);    
    printf("\nminutes = %d",minutes);    
}
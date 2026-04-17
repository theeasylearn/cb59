#include<stdio.h>
void main()
{
    //how to store data 
    int length,width,area;

    printf("Enter length");
    scanf("%d",&length);

    printf("Enter width");
    scanf("%d",&width);

    //process
    //variable-name1 = variable-name2 symbol(+-*/%) variable-name3
    area = length * width;

    printf("area = %d",area);
    
}
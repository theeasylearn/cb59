#include<stdio.h>
// example of structure that store product detail
// create structure 
struct Product 
{
    //create member variable
    char name[32]; //32 
    int price; // 4
    int quantity; //4
    float weight; //4
}; //each structure type variable will occupy 44 bytes 

void main()
{
    //create structure type variable 
    struct Product p1,p2,p3,p4,p5;
    // input 
    printf("Enter Product name");
    fflush(stdin);
    gets(p1.name);
    fflush(stdin);
    printf("Enter product price");
    scanf("%d",&p1.price);
    printf("Enter product Quantity");
    scanf("%d",&p1.quantity);
    printf("Enter product weight");
    scanf("%f",&p1.weight);

    //display product 
    printf("Name = %s \n",p1.name);
    printf("Price = %d \n",p1.price);
    printf("Quantity = %d \n",p1.quantity);
    printf("Weight = %f \n",p1.weight);
}



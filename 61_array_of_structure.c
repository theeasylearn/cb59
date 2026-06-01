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
    struct Product shop[5];
    
}

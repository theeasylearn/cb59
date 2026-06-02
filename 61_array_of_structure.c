#include <stdio.h>
// example of structure that store product detail
// create structure
struct Product
{
    // create member variable
    char name[32]; // 32
    int price;     // 4
    int quantity;  // 4
    float weight;  // 4
}; // each structure type variable will occupy 44 bytes
void PrintLine()
{
    printf("\n");
    for (int count = 1; count <= 100; count++)
    {
        printf("*");
    }
    printf("\n");
}

void main()
{
    // create structure type variable
    // struct structure-name array-name[size]
    struct Product shop[5];

    for (int index = 0; index < 5; index++)
    {
        printf("Enter %d product detail", index + 1);
        printf("\n Enter product Name");
        fflush(stdin);
        gets(shop[index].name);
        fflush(stdin);
        printf("Enter product price");
        scanf("%d", &shop[index].price);
        printf("Enter product quantity");
        scanf("%d", &shop[index].quantity);
        printf("Enter product weight");
        scanf("%f", &shop[index].weight);
    }
    PrintLine(); // print  *  100 times
    printf("index   Name    Price   Quantity    weight");
    PrintLine(); // print  *  100 times
    for (int index = 0; index < 5; index++)
    {
        printf("%d       %s      %d      %d          %f \n",index+1, shop[index].name, shop[index].price, shop[index].quantity, shop[index].weight);
    }
    // display price * Quantity
    // display grand total
}

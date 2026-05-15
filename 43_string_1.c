// write a program to create string using 1d array and take input & display it
#include <stdio.h>
void main()
{
    // create 1d array of char type(string)
    char name[32], surname[32], address[512];
    // accept input
    printf("Enter your name");
    scanf("%s", name);

    printf("Enter surname");
    scanf("%s", surname);

    printf("Enter address ");
    fflush(stdin);
    gets(address); //gets function can accept string from user with space 

    // display
    printf("name %s ", name);
    printf("\nsurname %s ", surname);
    printf("\naddress");
    puts(address); //can display string variable value 
}
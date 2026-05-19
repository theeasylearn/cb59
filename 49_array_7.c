// write a program check reverse string
// line1 = mohan
// output = nahom

#include <stdio.h>
#include <string.h>
// #how to create read only variable (constant)
#define WIDTH 128
void main()
{
    // create 1d array of char type(string)
    char s1[WIDTH];
    char s2[WIDTH];
    printf("Enter your name");
    fflush(stdin);
    gets(s1);

    int size = 0, left, right;
    size = strlen(s1);
    left = 0;
    right = size - 1;

    while (right >= 0)
    {
        s2[left] = s1[right];
        left = left + 1;
        right = right - 1;
    }
    s2[left] = '\0'; // store null at last position
    printf("%s", s2);
}
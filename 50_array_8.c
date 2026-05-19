// write a program to check whether given string is palindrom or not
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
    int size = 0, left, right,position;
    printf("Enter your name");
    fflush(stdin);
    gets(s1);

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

    for (position = 0; position<size; position++)
    {
        if (s1[position] != s2[position])
        {
            printf("\n string is not palindrome");
            break;
        }
    }

    if (position == size)
    {
        printf("\n string is palindrome");
    }
}
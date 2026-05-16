// write a program check whether given string is palindrome string or not
// line = madam
// line2 = madam
#include <stdio.h>
void main()
{
    // create 1d array of char type(string)
    char lower[128], upper[128];
    int ascii,position;
    printf("Enter one line text");
    fflush(stdin);
    gets(lower);
    fflush(stdin);
    for (position = 0; lower[position]!='\0' && position< 128; position++)
    {
        ascii = lower[position];
        if(ascii>=97 && ascii<=122)
            ascii = ascii - 32; // 81
        upper[position] = ascii;
    }
    upper[position] = '\0'; 
    printf("%s",upper);
}
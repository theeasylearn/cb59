// write a program to count how many letter (including space) string variable has. accept input from user
#include <stdio.h>
void main()
{
    // create 1d array of char type(string)
    char line[512];
    int count = 0;
    printf("Enter one line text");
    gets(line);

    puts(line);

    for (int position = 0; position < 512; position++)
    {
        if (line[position] != '\0')
        {
            count = count + 1;
        }
        else
        {
            break;
        }
    }
    printf("this string size is %d", count);
}
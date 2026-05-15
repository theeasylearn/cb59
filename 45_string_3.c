// write a program to count how many words string variable has. accept input from user
#include <stdio.h>
void main()
{
    // create 1d array of char type(string)
    char line[512];
    int word = 1;
    printf("Enter one line text");
    gets(line);

    puts(line);
    for (int position = 0; line[position] != '\0' && position < 512; position++)
    {
        if (line[position] == ' ')
        {
            word++;
        }
    }
    printf("this line has %d words", word);
}
// write a program check whether two string are same or not
// line1 = mam  = size = 3
// line2 = madam = size = 5

// line1 = madan  = size = 5
// line2 = madam = size = 5

#include <stdio.h>
#include <string.h>
void main()
{
    // create 1d array of char type(string)
    char s1[5] = {'s', 't', 'a', 'r', '\0'};
    char s2[5] = {'s', 't', 'a','r', '\0'};
    printf("s1 = %s s2 = %s \n", s1, s2);
    int size1 = 0, size2 = 0, position = 0;
    size1 = strlen(s1);
    size2 = strlen(s2);
    printf("s1 size = %d s2 size = %d", size1, size2);
    if (size1 != size2)
    {
        printf("\n both string are not same");
    }
    else
    {
        for (position = 0; position < size1; position++)
        {
            if (s1[position] != s2[position])
            {
                printf("\n both string are not same");
                break;
            }
        }

        if (position == size1)
        {
            printf("\n both string are same");
        }
    }
}
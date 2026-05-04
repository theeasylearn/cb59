// 1 2 3 4 ..... 100 (series)
#include <stdio.h>
void main()
{
    int number = 0;
    // number = 2;wrong way
    while(number<100)
    {
        number = number + 1; // right way
        printf("%10d", number);
    }
}

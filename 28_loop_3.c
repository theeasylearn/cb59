/* write a program to make sum of all number between given range
    input: start 10 stop 50
    process : 10 + 11 + 12 + 13 + 14 ........ 50
    output: 1230

*/
#include <stdio.h>
void main()
{
    int start = 10, stop = 50, sum = 0, number;

    printf("Enter start value");
    scanf("%d",&start);
    
    printf("Enter start value");
    scanf("%d",&stop);

    number = start; // 10

    while(number<=stop)
    {
        sum = sum + number; // 10
        number = number + 1; // 11
    }
    printf("%d \n", sum);
}
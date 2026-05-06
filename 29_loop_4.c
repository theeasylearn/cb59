/* write a program to make sum of all digits in given amount
   amount =   1 2 3 4 7 9
   process =  1 + 2 + 3 + 4 + 7 + 9
   output =   26
*/
#include <stdio.h>
void main()
{
    int amount, sum = 0, last_digit;
    printf("Enter amount");
    scanf("%d", &amount);
   
    while (amount > 0)
    {
        last_digit = amount % 10; // 9
        sum = sum + last_digit;   // 9
        amount = amount / 10;     // 12347
    }
    printf("sum %d", sum);
}
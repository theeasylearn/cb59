/*  write a program to findout whether student is eligible to apply for diploma course or not based upon below criteria
    student must have total 225 marks in maths, science and english and he must not have less then 35 marks in all 6 subject including maths, science, english.
*/
#include <stdio.h>
void main()
{
    int math, science, english, gujarati, hindi, computer, total;
    printf("Math: ");
    scanf("%d", &math);

    printf("Science: ");
    scanf("%d", &science);

    printf("English: ");
    scanf("%d", &english);

    printf("Gujarati: ");
    scanf("%d", &gujarati);

    printf("Hindi: ");
    scanf("%d", &hindi);

    printf("Computer: ");
    scanf("%d", &computer);

    if (math > 35 && science > 35 && english > 35 && gujarati > 35 && hindi > 35 && computer > 35)
    {
        total = math + science + english;
        if (total >= 225)
        {
            printf("congratulation, you are eligible to apply for diploma course");
        }
        else
        {
            printf("you are not eligible to apply for diploma course");
        }
    }
    else
    {
        printf("you are not eligible to apply for diploma course");
    }
}
#include <stdio.h>
// create union
union family
{
    char isMarried; // 1
    int children;   // 4
}; // 4 byte
void main()
{
    // create union type variable
    union family f1;
    printf("Are you married (yes = y, no = n)");
    scanf("%c", &f1.isMarried);

    printf("is Married = %c children = %d", f1.isMarried, f1.children);
    if (f1.isMarried == 'y')
    {
        printf("how many child you have");
        scanf("%d", &f1.children);
    }
     printf("\n is Married = %c children = %d", f1.isMarried, f1.children);
}
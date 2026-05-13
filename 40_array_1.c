// example of 1d array in c language
#include <stdio.h>
void main()
{
    // create array to store 5 subject marks of 1 student
    // datatype array-name[size]
    int marks[5],sum=0;

    // accept 5 subject marks from user
    for (int index = 0; index < 5; index++) // 0 1 2 3 4
    {
        printf("Enter %d subject marks", index + 1);
        scanf("%d", &marks[index]);
    }

    for (int index = 0; index < 5; index++)
    {
        printf("%d subject marks, %d \n ",index+1, marks[index]);
        sum = sum + marks[index];
    }
    printf("sum = %d",sum);
    //calculate & display percentage
}
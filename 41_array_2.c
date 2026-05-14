// example of 1d array in c language
// write a program to findout hottest day in april in bhavnagar from array which has temperature
#include <stdio.h>
void main()
{
    // static initialization
    float temp[30] = {38.0, 38.2, 38.5, 38.7, 39.0, 39.2, 39.4, 39.6, 39.8, 40.0, 40.2, 40.3, 40.5, 40.6, 40.7, 40.8, 41.0, 41.1, 41.2, 41.4, 41.5, 41.6, 41.7, 41.8, 41.9, 42.0, 42.1, 42.2, 42.3, 42.4};
    float max;
    int day;
    // store 1st day temperature
    max = temp[0];
    for (int index = 1; index < 30; index++)
    {
        if (temp[index] > max)
        {
            // copy value into max
            max = temp[index];
            day = index + 1;
        }
    }
    printf("hottest day temperature = %f and it was on %d", max,day);
}
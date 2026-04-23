// write a program to findout whether shape is portrait or landscape or square from user given length and width 
#include<stdio.h>
void main()
{
    int length,width;
    printf("\n enter length");
    scanf("%d",&length);

    printf("\n enter width");
    scanf("%d",&width);

    if(length==width) // == != < > <= ==
    {
        //square
        printf("\n shape is square");
    }
    
    if(length>width)
    {
        //portrait
        printf("\n shape is portrait ");
    }

    if(width>length)
    {
        printf("\n shape is landscape");
    }
    
}
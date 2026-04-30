/* write a program to decide and display zodiac sign as per sun from user given birth date
Date Range	                English Name
April 14 – May 14	        Aries
May 15 – June 14	        Taurus
June 15 – July 15	        Gemini
July 16 – August 16	        Cancer
August 17 – September 16	Leo
September 17 – October 16	Virgo
October 17 – November 15	Libra
November 16 – December 15	Scorpio
December 16 – January 13	Sagittarius
January 14 – February 12	Capricorn
February 13 – March 13	    Aquarius
March 14 – April 13	        Pisces
accept birthdate and birthmonth as different input
*/
#include <stdio.h>
void main()
{
    int date, month;
    printf("Enter birth date only");
    scanf("%d", &date);

    printf("Enter birth month only");
    scanf("%d", &month);

    if ((month == 4 && date >= 14) || (month == 5 && date <= 14))
    {
        printf("you zodiac sign is aries");
    }

    else if ((month == 5 && date >= 15) || (month == 6 && date <= 14))
    {
        printf("you zodiac sign is Taurus");
    }
    // task complete this program.
}
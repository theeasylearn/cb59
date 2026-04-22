// write a program to print mantra as per user choice
// if user choice is 1 print 5 mantra of shiva
// if user choice is 2 print 5 mantra of ganpati
// if user choice is 3 print 5 mantra of hanuman
#include <stdio.h>
void main()
{
    int choice = 0;
    printf("Press 1 for shiv mantras \n Press 2 for ganesha Mantras \n Press 3 for Hanumanji mantras");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\n Om Namah Shivaya");
        printf("\n Om Tryambakam Yajamahe Sugandhim Pushtivardhanam Urvarukamiva Bandhanan Mrityor Mukshiya Maamritat");
        printf("\n Om Namo Bhagavate Rudraya");
        printf("\n Om Tatpurushaya Vidmahe Mahadevaya Dhimahi Tanno Rudrah Prachodayat");
        printf("\n Om Shreem Hreem Kleem Glaum Gam Ganapataye Vara Varada Sarvajanam Me Vashamanaya Swaha");
    }
    if (choice == 2)
    {
        printf("\n Om Gan Ganapataye Namah");
        printf("\n Om Vakratunda Mahakaya Suryakoti Samaprabha Nirvighnam Kurume Deva Sarva-Kaaryeshu Sarvada");
        printf("\n Om Ekadantaya Vidmahe Vakratundaya Dheemahi Tanno Danti Prachodayat");
        printf("\n Om Shri Ganeshaya Namah");
        printf("\n Om Gam Ganapataye Namah");
    }
    if (choice == 3)
    {
        printf("\n Om Hanumate Namah");
        printf("\n Om Namo Bhagavate Hanumate Namah");
        printf("\n Om Shri Hanumate Namah");
        printf("\n Om Anjaneyaya Vidmahe Vayuputraya Dheemahi Tanno Hanumat Prachodayat");
        printf("\n Om Ramdutaya Namah");
    }
}
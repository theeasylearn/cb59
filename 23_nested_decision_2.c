    /*
        write a program to findout which movie is shorter from 2 movies duration in hour minutes seconds
    */
    #include <stdio.h>
    void main()
    {
        int hour1, minute1, second1;
        int hour2, minute2, second2;

        printf("Enter duration of Movie 1 (HH MM SS): ");
        scanf("%d %d %d", &hour1, &minute1, &second1);

        printf("Enter duration of Movie 2 (HH MM SS): ");
        scanf("%d %d %d", &hour2, &minute2, &second2);

        if (hour1 < hour2)
        {
            printf("movie 1 is shorter movie");
        }
        else if (hour1 == hour2)
        {
            if (minute1 < minute2)
            {
                printf("movie 1 is shorter movie");
            }
            else if (minute1 == minute2)
            {
                if (second1 < second2)
                {
                    printf("movie 1 is shorter movie");
                }
                else if (second1 == second2)
                {
                    printf("both movie is of same duration ");
                }
                else
                {
                    printf("movie 2 is shorter movie");
                }
            }
            else
            {
                printf("movie 2 is shorter movie");
            }
        }
        else
        {
            printf("movie 2 is shorter movie");
        }
    }
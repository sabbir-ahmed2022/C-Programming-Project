//Gaming File 01

#include <stdio.h>

int main ()
{
    int x;
    int y = 0;
    int attempt = 0;
    int players, Ltie = 0, Htie = 0, x_lowest, y_highest;
    int lowest = 999, highest = 0;

    printf("Welcome to Number Guessing Game\n\n");
    printf("Enter The Total Number of Player: ");
    scanf("%d", &players);

    int i = 0;
    while(i < players)
    {
        srand(time(0));
        int number = rand () % 100 + 1;
        attempt = 0;
        printf("\nPlayer Number %d value: ", i+1);
        scanf("%d", &x);
        attempt++;

        while(x!= number)
        {
            if (x < number)
            {
                printf("Your guess is too low.  Try again: ");
            }

            else if (x > number)

            {
                printf("Your guess is too high. Try again: ");
            }

            scanf("%d", &x);
            attempt++;
        }

        printf("\nThe Player Number %d completed with %d attempt\n\n",i+1,attempt);

        if (attempt < lowest)
        {
            lowest = attempt;
            x_lowest = i+1;
            //Ltie = 0;
        }

        else if (attempt == lowest)
        {
            // Ltie = 1;
        }
        i++;
        // printf("\nCongrats the Player number %d Winner with %d attempt",x_lowest,lowest);
    }
    printf("\nCongrats the Player number %d Winner with %d attempt/n/n",x_lowest,lowest);

    return 0;
}

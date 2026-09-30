#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>

int main()
{
    int pin;
    int correctPin = 11913;
    int attempts = 3;

    printf("===== PIN DOOR LOCK SYSTEM =====\n");

    while (attempts > 0)
    {
        printf("\nEnter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            printf("\nAccess Granted!\n");
            printf("Door Unlocked.\n");
            break;
        }
        else
        {
            attempts--;

            printf("\nIncorrect PIN!\n");

            if (attempts > 0)
            {
                printf("Attempts remaining: %d\n", attempts);
            }
            else
            {
                printf("Access Denied!\n");
                printf("Door locked.\n");
            }
        }
    }

    return 0;
}

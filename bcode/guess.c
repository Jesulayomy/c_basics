#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INT_MAXI 100
#define INT_MINI 1

int main(void)
{
    int usr, number, tries = 0;

    srand(time(0));
    number = (rand() % INT_MAXI) + INT_MINI;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &usr);
        if (usr > number)
            printf("\nToo high!\n");
        else if (usr < number)
            printf("\nToo low\n");
            tries++;
    }while(usr != number);

    printf("Correct!\nYou guessed correctly in %d tries\n", tries);

    return (0);
}

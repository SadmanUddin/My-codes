#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char c1, char c2)
{
    // for rock papewr scissors - returns 1 if c1>c2 and 0 otherwise. if c1==c2 it will return -1
    if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

    int main2()
    {
        int playerscore = 0, compscore = 2, temp;
        char playerchar, compchar;
        char dict[] = {'r', 'p', 's'};
        printf("welcome to rock paper scissors game\n");
        // players input
        for (int i = 0; i < 3; i++)
        {
            printf("player 1s turn:\n");
            printf("choose 1 for rock, 2 for paper, 3 for scissors\n");
            scanf("%d", &temp);
            playerchar = dict[temp - 1];
            printf("you choose %c\n\n", playerchar);
                // computers work
            printf("computers turn:\n");
            printf("choose 1 for rock, 2 for paper, 3 for scissors\n");
            temp = generateRandomNumber(3) + 1;
            compchar = dict[temp - 1];
            printf("cpu choose %c\n\n", compchar);
                // calculation of the answers
                if (greater(compchar, playerchar) == 1)
            {
                compchar += 1;
            }
            else if (greater(compchar, playerchar) == -1)
            {
                compchar += 1;
                playerchar += 1;
            }
            else
            {
                playerchar += 1;
            }
        }
        if (playerscore > compscore)
        {
            printf("you win the game\n");
        }
        else if (compscore > playerscore)
        {
            printf("cpu won the game\n");
        }
        else
        {
            printf("its a draw\n");
        }
        
        
        return 0;
    }
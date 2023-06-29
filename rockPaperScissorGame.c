#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void userMove (int user)
{
    printf ("******\n");
    if (user == 1)
    {
        printf ("Your choice: ROCK\n");
    }
    else if (user == 2)
    {
        printf ("Your choice: SCISSOR\n");
    }
    else if (user == 3)
    {
        printf ("Your choice: PAPER\n");
    }
}
void compMove (int comp)
{
    if (comp == 1)
    {
        printf ("Computer's choice: ROCK\n");
    }
    else if (comp == 2)
    {
        printf ("Computer's choice: SCISSOR\n");
    }
    else if (comp == 3)
    {
        printf ("Computer's choice: PAPER\n");
    }
    
}

int main()
{
    int user, comp;
    int count = 0;
    int win = 0, lose = 0, draw = 0;
    while (1)
    {
        printf ("Chose your choice: \n");
        printf ("1 for rock \t 2 for scissor \t 3 for paper \t 0 to exit \n");
        scanf ("%d", &user);
        userMove(user);
        if (user == 0)
            break;
    
        srand((int)time(0));
        comp = rand() % (3-1+1)+1; //rand() % (max – min + 1) + min to recieve results form min to max
        compMove (comp);
        printf ("------------\n");
        if (user == 1)
        {
            if (comp == 2)
            {
                printf ("You win\n");
                count++;
                win++;
            }
            else if (comp == 3)
            {
                printf ("You lose\n");
                count--;
                lose++;
            }
            else 
            {
                printf ("It's a draw\n");
                draw++;
            }
        }
        else if (user == 2)
        {
            if (comp == 3)
            {
                printf ("You win\n");
                count++;
                win++;
            }
            else if (comp == 1)
            {
                printf ("You lose\n");
                count--;
                lose++;
            }
            else 
            {
                printf ("It's a draw\n");
                draw++;
            }
        }
        else if (user == 3)
        {
            if (comp == 1)
            {
                printf ("You win\n");
                count++;
                win++;
            }
            else if (comp == 2)
            {
                printf ("You lose\n");
                count--;
                lose++;
            }
            else 
            {
                printf ("It's a draw\n");
                draw++;
            }
        }
        printf ("------------\n");
    }


    if (count > 0)
    {
        printf ("You beat the dump! With %d win, %d lose, %d draw", win, lose, draw);
    }
    else if (count < 0)
    {
        printf ("You idiot! With %d win, %d lose, %d draw", win, lose, draw);
    }
    else
    {
        printf ("Dont know what to say! With %d win, %d lose, %d draw", win, lose, draw);
    }

    return 0;
}

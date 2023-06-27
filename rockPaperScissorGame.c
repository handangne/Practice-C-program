#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void yourChoice (int);
void compChoice (int);
void result (int, int);
void finalResult (int);

void yourChoice (int y)
{
    printf ("1 for STONE.\n");
    printf ("2 for PAPER.\n");
    printf ("3 for SCISSOR.\n");
    printf ("Enter your choice:\n");
    scanf ("%d", &y);
    printf ("------------------------\n");
    if (y == 1)
        printf ("You chose STONE.\n");
    else if (y == 2)
        printf ("You chose PAPER.\n");
    else if(y == 3)
        printf ("You chose SCISSORS.\n");
    
}

void compChoice (int c)
{
    srand (time(0));
    c = rand() % (3-1+1)+1;
    if (c == 1)
        printf ("Computer chose STONE.\n");
    else if (c == 2)
        printf ("Computer chose PAPER.\n");
    else if(c == 3)
        printf ("Computer chose SCISSORS.\n");
}

void result (int y, int c)
{
    int count = 0;
    if (y == c)
    {
        printf ("Draw\n");
    }
    if (y > c)
    {
        printf ("You win\n");
        count++;
    }
    if (y < c)
    {
        printf ("You lose\n");
        count--;
    }
}

void finalResult (int count)
{
    if (count == 0)
    {
        printf ("Draw");
    }
    if (count > 0)
    {
        printf ("You win");
    }
    if (count < 0)
    {
        printf ("You lose");
    }
}

int main ()
{
    printf ("You will play 3 times.\n");
    int y, c;
    //1st time
    printf ("------------------------\n");
    printf ("First round\n");
    yourChoice (y);
    compChoice (c);
    result (y, c);
    //2st time
    printf ("------------------------\n");
    printf ("Second round\n");
    yourChoice (y);
    compChoice (c);
    result (y, c);
    //3st time
    printf ("------------------------\n");
    printf ("Third round\n");
    yourChoice (y);
    compChoice (c);
    result (y, c);
    //Final
    printf ("------------------------\n");
    int count;
    printf ("Final Result: \n");
    finalResult (count);
    return 0;
}

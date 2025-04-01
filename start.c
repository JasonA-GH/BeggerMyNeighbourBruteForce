#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* cards;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void randomize_deck()
{
    for(int i=0; i < 52; i++)
    {
        int r = rand()%52;
        swap(&(cards[i]), &(cards[r]));
        //cards[i] = 
    }
}

void play_game_until_end()
{
    
}

int main()
{
    srand(time(NULL));
    cards = malloc(sizeof(*cards)*52);
    
    for(int i=0; i < 36; i++)
    {
        cards[i] = 0;
    }
    int index = 1;
    for(int i=36; i < 52; i++)
    {
        cards[i] = index;
        index++;
        if(index == 5)
            index = 1;
    }
    
    play_game_until_end();
    
    for(int i=0; i < 52; i++)
    {
        printf("%d", cards[i]);
    }
    
    printf("\n");

    return 0;
}

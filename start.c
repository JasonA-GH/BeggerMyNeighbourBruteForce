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

int is_game_over(int* p1, int* p2)
{
    if(p1[0] == -1 || p2[0] == -1)
        if(p1[0] == -1)
            return 2;
        return 1;
    return 0;
}

void play_game_until_end()
{
    int* p1 = malloc(sizeof(*p1)*52);
    int* p2 = malloc(sizeof(*p1)*52);

    int index = 0;
    
    for(int i=0; i < 52; i++)
    {
        if(i <= 25)
            p1[i] = cards[i];
        else
        {
            p2[index] = cards[i];
            index++;
            p1[i] = -1;
            p2[i] = -1;
        }
    }
    
    while(is_game_over(p1, p2) == 0)
    {
        
    }
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

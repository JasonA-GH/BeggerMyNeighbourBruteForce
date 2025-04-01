#include <stdio.h>
#include <stdlib.h>

int* cards;

int main()
{
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
    
    for(int i=0; i < 52; i++)
    {
        printf("%d", cards[i]);
    }
    
    printf("\n");

    return 0;
}

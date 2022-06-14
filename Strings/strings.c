#include <stdio.h>
#include <stdlib.h>

int main()
{
    char teste[] = {'b', 'r', 'a', 's', 'i', 'l'};

    int i = 0;
    while (i < 6)
    {
        printf("%c", teste[i]);
        i++;
    }
    printf("\n");

    return 0;
}
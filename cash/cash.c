#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float n;
    int change;
    int coin;
    do
    {
        printf("Change owed?\n");
        n = get_float();
    }
    while (n < 0);

    change = n * 100;
    coin =0;

    while(change >= 25)
    {
        coin++;
        change = change - 25;
    }

    while(change >= 10)
    {
        coin++;
        change = change - 10;
    }

    while(change >= 5)
    {
        coin++;
        change = change - 5;

    }

    while(change >= 1)
    {
        coin++;
        change = change - 1;
    }

    printf("%d\n", coin + change);
}
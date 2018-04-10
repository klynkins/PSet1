#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int mins = get_int();
    int bot = 12 * mins;
    printf("bottles: %d\n", bot);
}
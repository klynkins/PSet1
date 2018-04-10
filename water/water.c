#include <cs50.h>
#include <stdio.h>
// good. only thing I would do is
// add error handling of the input,
// like in the other scripts (eg -1 = -12 min, and thats a bug)
// they didnt say to do this so
// its not a big deal

int main(void)
{
    printf("minutes: ");
    int mins = get_int();
    int bot = 12 * mins;
    printf("bottles: %d\n", bot);
}
#include <cs50.h>
#include <stdio.h>

/*tips
i. run style50 - a few things here would have been caught by it
ii. a comment or two to explain why a certain line of code is helpful,
esp when you are debugging an issue

good
use of spacing
solution is clear and easy to understand
*/

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

    // a comment explaining why you * by 100 would be good here
    change = n * 100;
    coin =0;
    /* would have been caught by style50
    would have been coin = 0 */

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
    // why add change here..
    // base on the logic of your last while
    // statement you don't need to add change
    // should terminate when change = 0
    // Makes the dev wonder why you are adding this value

    printf("%d\n", coin + change);
}
#include <cs50.h>
#include <stdio.h>
/*
tips
i. run style50 - a few things here would have been caught by it
ii. brackets {} should go on the next line. see do while
iii. line 30: for k < i + 2, would be good to have comment why you use this
to end the loop. Or store in a variable with a descriptive name, like
row_blocks = i + 2

good
clean implementation of mario, code is clear
height as var makes it clear as to how the input controlls the code
 */

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23); //<-- while inline to }

        for(int i = 0; i < height; i++) {

            for(int j = 0; j < height - i - 1; j++) {
            printf(" ");

        }
             // <--space-->
            for(int k = 0; k < i + 2; k++) {
                //<--space -->
                printf("#");
                //<--space-->
            }
            printf("\n");
    }
}
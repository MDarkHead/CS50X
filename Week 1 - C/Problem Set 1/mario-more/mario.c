// Riyansh Ritesh Srivastava

/*
In a file called mario.c in a folder called mario-more,
implement a program in C that recreates that pyramid,
using hashes (#) for bricks, as in the below:

   #  #
  ##  ##
 ###  ###
####  ####

And let’s allow the user to decide just how tall the pyramids should be
by first prompting them for a positive int between, say, 1 and 8, inclusive.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int getCount;
    bool inputCheck = true;
    while (inputCheck)
    {
        getCount = get_int("Height: ");
        if (getCount < 1 || getCount > 8)
        {
            inputCheck = true;
        }
        else
        {
            inputCheck = false;
        }
    }

    for (unsigned int i = 0; i < getCount; i++)
    {
        // print the spaces before the #'s, the -1 is so it won't add an extra space
        for (unsigned int j = getCount - 1; j > i; j--)
        {
            printf(" ");
        }

        // print the #'s for the left side
        for (unsigned int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");

        // print the #'s for the right side
        for (unsigned int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

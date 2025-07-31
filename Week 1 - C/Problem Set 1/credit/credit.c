// Riyansh Ritesh Srivastava

/*
Write a program that prompts the user for a credit card number
and then reports (via printf) whether it is a valid American Express,
MasterCard, or Visa card number, per the definitions of each’s format herein.


*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    long long creditcardNum;
    char creditStr[25];

    // get and convert credit card num to string
    creditcardNum = get_long("Number: ");
    sprintf(creditStr, "%lld", creditcardNum);

    // Luhn algorithm check

    // multiply every other digit by 2, starting with the number’s second-to-last digit,
    // and then add those products’ digits together.
    int sum = 0;
    int strLength = strlen(creditStr);
    for (int i = strLength - 2; i >= 0; i -= 2)
    {
        int digit = creditStr[i] - '0'; // converts string to int
        int product = digit * 2;

        if (product >= 10)
        {
            // split the digits if the product is 10 or more
            // first half gets the tens digit and the second gets the ones digit
            sum += (product / 10) + (product % 10);
        }
        else
        {
            // add the products if it doesn't need to split
            sum += product;
        }
    }

    // add the sum to the sum of the digits that weren’t multiplied by 2
    for (int i = strLength - 1; i >= 0; i -= 2)
    {
        int digit = creditStr[i] - '0';
        sum += digit;
    }

    // if the total’s last digit is 0 (or modulo 10 is 0)
    if ((sum % 10) == 0)
    {
        // passes Luhn algorithm

        // check if the card is has a valid beginning & length
        if ((creditStr[0] == '4') && (strLength == 13 || strLength == 16))
        {
            // passes Luhns and visa checks
            printf("VISA\n");
        }
        else if ((creditStr[0] == '3' && (creditStr[1] == '4' || creditStr[1] == '7')) &&
                 (strLength == 15))
        {
            // passes Luhns and american express checks
            printf("AMEX\n");
        }
        else if ((creditStr[0] == '5' && creditStr[1] >= '1' && creditStr[1] <= '5') &&
                 (strLength == 16))
        {
            // passes Luhns and mastercard checks
            printf("MASTERCARD\n");
        }
        else
        {
            // passes Luhns but fails valid beginning or length
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n"); // fails Luhn algorithm

    }
}

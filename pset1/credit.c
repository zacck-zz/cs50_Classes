#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool startsWith (char* base, char* str);
int countDigits(long long n);

int main(void)
{
    long long cardNum;
    int currProduct;
    int currTotal = 0;
    int digits;
    //prompt user to enter a credit card 
    printf("Please Enter Your Card Number\n");

    cardNum = GetLongLong();

    //lets count the number of digits 
    digits = countDigits(cardNum);
    
    //printf("%d count \n", digits);
    if(digits == 13 || digits == 15 || digits == 16)
    {
        //lets check validity
        int last = 1;
        char* card_string = calloc(digits, sizeof(char));
        //use this to loop through above array
        int pos = digits;
        

        //multiply every other number by two
        while (cardNum > 0) {
            int currDigit = cardNum % 10;
            card_string[pos] = (char)currDigit;
            pos --;
            //this means we are at the last and we can use this as an interval for the next iteration
            if(last == 0)
            {
                currProduct =  currDigit * 2;
                //run this loop again to get the digits of the result
                while(currProduct > 0 )
                {
                    int currInnerDigit = currProduct % 10;
                    currTotal += currInnerDigit;
                    //get the next inner digit
                    currProduct /= 10;
                }
                //switch indicator for next iteration
                last = 1;
            }
            else
            {
               //add to the total since we didnt multiply it by e 
               currTotal += currDigit;
               //switch the indicator of positions
               last = 0;
            }
            
            //get the next digit 
            cardNum /= 10;
        }
        
        int validity = currTotal % 10;
        
        // convert card num to string 
        
        //sprintf(card_string, "%llu", cardNum);
        //ltoa(cardNum,card_string,10);
        
        printf("Card String %s\n", card_string);
        
        if(validity != 0)
        {
            printf("INVALID\n");
        }
        else
        {
            //check the number of digits to show you card type check  valid cart prefixes
            if ( digits == 15 )
            {
                if(startsWith("34", card_string) || startsWith("37", card_string))
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else if ( digits == 16 )
            {
                if (startsWith("51", card_string) || startsWith("52", card_string) || startsWith("53", card_string) || startsWith("54", card_string) || startsWith("55", card_string))
                {
                    printf("MASTERCARD\n");
                }
                else if (startsWith("4", card_string))
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
             else if (startsWith("4", card_string) )
            {
                    printf("VISA\n");
            }
            else 
            {
               printf("INVALID\n");
            }
            
            
        }
        
        
        
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

/*This function retuns a boolean 
takes in two strings checks if one starts with the other 
*/

bool startsWith (char* base, char* str) {
    return (strstr(base, str) - base) == 0;
}


/*
*THis function counts the number of digits 
*accepts an long and returns an int
*/
int countDigits(long long n)
{
    int count = 0;
    while( n > 0 )
    {
        count++;
        n /= 10;             /* n=n/10 */
        
    }
    return count;
}



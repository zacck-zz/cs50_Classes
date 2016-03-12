#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for(char c = 'A'; c <= 'Z'; c++)
    {
        //casting of int to char 
        printf("%i is %c \n", (int) c, c);
    }
}
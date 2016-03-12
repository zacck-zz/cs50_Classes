#include <stdio.h>
#include <cs50.h>


int GetPositiveInt(void);

int main(void)
{
    int n = GetPositiveInt();
    printf("Thanks for the %i! \n", n);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("Retry With Positive Int: ");
        n = GetInt();
    }
    while(n < 1);
    return n;
}
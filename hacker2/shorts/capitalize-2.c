#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

//lets specify that our program can take in command line arguments 
int main(void)
{
    string s = GetString();
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n"); 
}
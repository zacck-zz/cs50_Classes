#include <stdio.h>
#include <cs50.h>

//lets specify that our program can take in command line arguments 
int main(int argc, string argv[])
{
    for(int i = 0; i < argc; i++)
    {
        printf("%s \n", argv[i]);
    }
}
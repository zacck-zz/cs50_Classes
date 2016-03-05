#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pyramidHeight;

    do
    {
        printf("Please Choose a pyramid height less than 23 but greater than 0\n");
        pyramidHeight = GetInt();
    }
    while ( pyramidHeight > 23); 

    //run this loop for every line we get 
    for(int i = 0; i < pyramidHeight; i++)
    {
        //this line is equal to half of the hashes separated by 2 spaces
        int currLine = i;
        int spaces = pyramidHeight - currLine;

        for(int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        //lets now print our hashes
        for(int m = 0; m < currLine; m++)
        {
            printf("#");
        }
        //print two spaces then run the same loop as above (should make a function maybe?)
        printf("  ");
        for (int m  = 0; m < currLine; m++)
        {
            printf("#");
        }
        //new line for next iteration
        printf("\n");
    }
    return 0;
}

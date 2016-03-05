#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int showerLength;

    //get a positive int loop 
    //
    do
    {
        //prompt the user to put in the shower length
        printf("Please Enter the Length of your Shower in minutes \n");
        showerLength = GetInt();

    }
    while(showerLength < 0);
    //We have a positibe numbert of minutes 
    //one minute is 12 bottles according to the instructions 
    //number of bottles i number of minutes times 12 
    //
    int numBottles = showerLength * 12;

    printf("You use %d bottles of Water when you shower \n", numBottles);

}

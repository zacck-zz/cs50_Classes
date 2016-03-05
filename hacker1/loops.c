#include <stdio.h>
#include <cs50.h>


int main (void)
{

    //WHILE LOOPS
    int i = 0; 

    while(i < 10)
    {
        printf("hi\n");
        i++;
    }

    printf("this is where the while look ends \n \n");

    //FOR LOOPS
    for(int i = 5; i > 0; i--)
    {
        printf("%d\n",i);

    }

    printf("Blast OFF \n");

    printf("this is the end of the for loop \n");
    
    //DO WHILE LOOPS
    
    int  n = 0;

    do
    {
        //lets prompt the user for a number 
        printf("Type  a Positive Number\n");

        n = GetInt();

    }
    while(n < 0);

    //if the number is positive lets exit the loop and thank the user
    printf("Thank you for the positive  number\n");




    return 0;

}


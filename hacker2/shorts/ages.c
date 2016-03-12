#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //number of people
    int n;
    do
    {
        printf("Please Enter the number of people in in the room ");
        n = GetInt();
    }
    while(n < 1);
    
    //lets use an array to store the number 
    int ages[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("Age of Person #%i \n", i+1);
        ages[i] = GetInt();
    }
    
    printf("Time Passes ... \n");
    
    for(int i = 0; i < n; i++)
    {
        printf("A year from now, person #%i will be %i years old. \n", i + 1, ages[i] + 1);
    }
}
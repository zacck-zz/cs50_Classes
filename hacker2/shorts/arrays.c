#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

#define N 10


//lets go through some arrays 
int main(int argc, char* argv[])
{

    //bracket type array     
    //int x[N];
    
    
    int* x = malloc(sizeof(int) * N);
    
    for(int i =0; i < N; i++)
    {
        x[i] = i * 2;
    }
    
    for(int i = 0; i < N; i++)
    {
        printf("Element %d: %d \n", i, x[i]);
    }
    
    
}
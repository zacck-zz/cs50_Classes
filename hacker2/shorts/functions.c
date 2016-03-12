#include <stdio.h>
#include <cs50.h>
#include <string.h>

//This is a function prototype we use this in c to declare a function so main knows there is one 
int square(int x);
void printf_fudd_style(string s);

int main(void)
{
    //Calling a function and assigning it to a variable
    int six_squared = square(6);
    printf("%d \n ", six_squared);
    
    //passing a variable to a function 
    int a = 7;
    int a_squared =  square(a);
    printf("%d \n", a_squared);
    
    //using a function as a variable in this case whatever it returns 
    printf("%d \n ", square(10));
    
    printf("The square funtion is above \n Please input a string for fudd style \n");
    string s = GetString();
    while(s != NULL)
    {
        printf_fudd_style(s);
        s = GetString();
    }
    
    return 0;
    
}

//first word specifies the return type and the second word is a descriptive name and the 
//input specified in a set of parenthesis
int square(int x)
{
    return x * x;
}

//a function like this has no return type or value mostly they alter state or print to screen 
void printf_fudd_style(string s)
{
    int length = strlen(s);
    for(int i = 0; i< length; i++)
    {
        if(s[i] == 'r')
            s[i] = 'w';
        
    }
    
    printf("%s \n", s);
}
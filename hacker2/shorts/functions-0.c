#include <stdio.h>
#include <cs50.h>

//prototype hint to show there is a function to come 
void PrintName(string name);

int main(void)
{
    printf("Your Name: ");
    string s = GetString();
    PrintName(s);
    
}

void PrintName(string name)
{
    printf("hello, %s \n", name);
}
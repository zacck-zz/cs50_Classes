#include <stdio.h>
#include <cs50.h>

//lets specify that our program can take in command line arguments 
int main(void)
{
   //ascii - american standard code for information interchange 
   for(int i = 65; i < 65 + 26; i++)
   {
      //casting of char to int
       printf("%i is %c \n", i, (char) i);
   }
}
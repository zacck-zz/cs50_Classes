#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
    string s = GetString();
    
    char* letters = malloc(sizeof(char));
    int inits = 0;
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(i == 0 && s[i] !=' ')
        {
            
            letters[inits] = s[i];
            inits++;
        }
        if(s[i] == ' ')
        {
            if(s[i + 1] != ' ')
            {
                letters[inits] = s[i+1];
                inits++;
            }
           
        }
       
    }
    
    if(inits != 0)
    {
        for(int i = 0; i < inits; i++)
        {
            
            printf("%c", toupper(letters[i]));
        }
        printf("\n");
        
    }
    
   

}
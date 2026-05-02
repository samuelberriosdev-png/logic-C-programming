#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char name[100];
    char ageBuffer[10];
    int valido = 1;
    int age = 0;

    printf("What's your name? ");
    
    if (fgets(name, sizeof(name), stdin)) 
    {
        name[strcspn(name, "\n")] = 0;
    }

    for (int i = 0; i < (int)strlen(name); i++) 
    {
        if (!isalpha(name[i]) && name[i] != ' ') 
        {
            valido = 0;
            break;
        }
    }

    while (1) 
    {
        printf("What's old your years? ");

        if (fgets(ageBuffer, sizeof(ageBuffer), stdin)) 
        {  
            age = atoi(ageBuffer); 
            if (age > 0 && age <= 100) 
            {
                break; 
            }
        }
        printf("Invalid entry. Please use numbers between 1 and 100.\n");
    }

    if (valido && strlen(name) > 0) 
    {
        printf("Hi %s, you are %d years.\n", name, age);
    } 
    else 
    {
        printf("Error in the name ❌ (use only letters).\n");
    }

    return 0;
}

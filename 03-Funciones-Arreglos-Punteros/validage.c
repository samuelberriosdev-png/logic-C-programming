#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char date[100];
    char ageBufer[10];
    int valido = 1;
    int age;

    printf("What is your name? ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = 0;

    for (int i = 0; i < strlen(date); i++)
    {
        if (!isalpha(date[i]) && date[i] != ' ')
        {
            valido = 0; 
            break;
        }
    }

    while (1)
    {

        printf("What's your age? ");

        if (scanf("%d", &age) == 1)
        {
            if (age > 0 && age <= 100)
            {
                break; 
            }
        }
        else
        { 
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
                
        }

        printf("Invalid entry. Please use numbers between 1 and 100.\n");
    }

    if (valido && strlen(date) > 0)
    {
        printf("Hello %s, you're %d years.\n", date, age);
    }
    else
    {
        printf("Error in name ❌ (use only letters).\n");
    }

    return 0;
}
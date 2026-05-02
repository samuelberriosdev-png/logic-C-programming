#include <stdio.h>

int main(void)
{
    int date;
    char term; 

    while (1)
    {
        printf("Enter a number (18-50): ");
        if (scanf("%i%c", &date, &term) != 2 || term != '\n')
        {
            printf("Error: No decimals, epaces or letters allowed.\n");

            while (getchar() != '\n');
                
        }
        else if (date < 18 || date > 50)
        {
            printf("Error: The number must be between 18 y 50.\n");
        }
        else
        {
            break;
        }
    }

    printf("Valid number: %i\n", date);
    return 0;
}

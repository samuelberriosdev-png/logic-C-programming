#include <stdio.h>
#include <string.h>

int main(void) 
{
    int k = 0;
    int sum = 0;
    char name[50];

    printf("What's your name: ");
    fgets(name, sizeof(name), stdin);
    
    name[strcspn(name, "\n")] = 0;

    do {
        printf("How many numbers are you going to add? ");
        if (scanf("%d", &k) != 1) 
        {
            printf("Error: Enter a valid numeric value.\n");
            while(getchar() != '\n');
            continue;
        }

        if (k <= 0) 
        {
            printf("Error: Enter a positive number greater than zero.\n");
        }
    } 
    while (k <= 0);

    int number[k];

    for (int i = 0; i < k; i++) 
    {
        printf("Enter your number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < k; i++) 
    {
        sum += number[i];
    }

    printf("\nHello %s, the numbers you entered are: ", name);
    for (int i = 0; i < k; i++) 
    {
        printf("%d%s", number[i], (i < k - 1) ? ", " : "");
    }
    
    printf("\nThe sum of your numbers is: %d\n", sum);

    return 0;
}
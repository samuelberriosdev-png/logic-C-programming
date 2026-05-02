#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);
    }
    while(n < 0 || n > 10);

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    
}
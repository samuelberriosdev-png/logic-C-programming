#include <stdio.h>

int main(void)
{
    int cambio;
    int moneda = 0;
    int  m25 = 0, m10 = 0, m5 = 0, m1 = 0;
    do
    {
        printf("Enter your change: ");
        scanf("%i", &cambio);
    }

    while (cambio <= 0);
    while (cambio >= 25)
    {
        cambio -= 25; m25++;
    }
    while (cambio >= 10)
    {
        cambio -= 10; m10++;
    }
    while (cambio >= 5)
    {
        cambio -= 5; m5++;
    }
    while (cambio >= 1)
    {
        cambio -= 1; m1++;
    }
    
    if(m25 > 0)
    {
        printf("Coins of 25: %i\n", m25);
    }
    if(m10 > 0)
    {
        printf("Coins of 10: %i\n", m10);
    }
    if(m5 > 0)
    {
        printf("Coins of 5: %i\n", m5);
    }
    if(m1 > 0)
    {
        printf("Coins of 1: %i\n", m1);
    }
    int total = m25 + m10 + m5 + m1;

    printf("Total Coins: %i\n", total);
}
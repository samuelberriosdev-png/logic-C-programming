#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &number);
    }
    while(number < 1);

    for(int i = 1; i <= number; i++)
    {
        if(i % 2 == 0)
        {
            printf ("X es par \n");
            sum += i;
        }
        else
        {
            printf("X es impar\n");
        }
    }
    printf("la suma de los pares es:%i\n", sum);
}
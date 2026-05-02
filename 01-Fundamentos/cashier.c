#include <stdio.h>

int main(void)
{
    int starting_balance = 500;
    int retirement = 0;
    do
    {
        printf("You can only withdraw a multiple od $10: ");
        scanf("%i", &retirement);
    }
    while(retirement % 10 != 0 || retirement > starting_balance);

    if(retirement % 10 == 0 && retirement <= starting_balance)
    {
        starting_balance = starting_balance - retirement;
        printf ("You have starting balance %i\n", starting_balance);
    }
    printf ("Have removed $%i\n", retirement);
}
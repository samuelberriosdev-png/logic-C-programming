#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int age;

    printf("What's yuor name? ");
    fgets(name, sizeof(name), stdin);
    do
    {
        printf("What's is your age? ");
        scanf("%d", &age);

    } 
    while (age <= 0);

    if (age < 18)
    {
        printf("Sorry %s, there is a detail in your age %i\n", name, age);
        printf("Come back when you are over '18' years ");
    }
    else
    {
        printf("Hello %s, welcome 'enjoy'", name);
    }
}
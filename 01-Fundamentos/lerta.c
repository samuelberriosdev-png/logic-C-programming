#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    int age;

    printf("What's your name: ");
    fgets(name, sizeof(name), stdin),

    name[strcspn(name, "\n")] = 0;

    printf("What's your age?: ");
    scanf("%i", &age);

    printf("%i and %s", age, name);
}
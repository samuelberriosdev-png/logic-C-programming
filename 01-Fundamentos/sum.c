#include <stdio.h>

int main(void) {
    int sum = 0;
    int number;
    int value_entered;

    printf("How many numbers do you want to add? ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) 
    {
        printf("Enter your number to add: ");
        
        scanf("%d", &value_entered); 
        
        
        sum = sum + value_entered; 
    }

    printf("the sum of your number is: %d\n", sum);

    return 0;
}

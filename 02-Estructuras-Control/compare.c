#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[2][50];

    for(int i = 0; i < 2; i++)
    {
        printf("Enter your word %d: ", i + 1);
        scanf("%s", word[i]);
    }

    if (strcasecmp(word[0], word[1]) == 0)
    {
        printf("Your words '%s' and '%s' are the same \n", word[0], word[1]);
    }
    else
    {
        printf("Your words are different\n");
    }

    return 0;
}


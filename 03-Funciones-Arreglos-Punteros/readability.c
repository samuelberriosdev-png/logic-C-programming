#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int letters = 0;
    int words = 1;
    int oraciones = 0;
    char text[1058];

    printf("text: ");
    if(fgets (text, sizeof(text), stdin))

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            oraciones++;
        }
    }
    float L = ((float) letters / words) * 100;
    float S = ((float) oraciones / words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
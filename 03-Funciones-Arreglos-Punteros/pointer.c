#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char buffer[1040];

    printf("s: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return 1;
    }

    buffer[strcspn(buffer, "\n")] = 0;

    char *s = malloc(strlen(buffer) + 1);
    if (s == NULL)
    {
        return 1;
    }
    
    strcpy(s, buffer);

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        free(s);
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper((unsigned char)t[0]);
    }

    printf("\n%s\n", s);
    printf("%s\n", t);

    free(s);
    free(t);

    return 0;
}
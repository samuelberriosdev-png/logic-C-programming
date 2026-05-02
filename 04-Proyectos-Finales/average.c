#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if(argc == 2)
    {
        char *name = argv[1];

        printf("Las notas de ");
        for(int i = 0, n = strlen(name); i < n; i++)
        {
            printf("%c", toupper(name[i]));
        }
        printf(":\n");
    }

    float notas[3];
    float suma = 0;
    float promedio = 0;
    int valido;

    for(int i = 0; i < 3; i++)
    {
        do
        {
            printf("Ingresa la nota %d: ", i + 1);
            valido = scanf("%f", &notas[i]);

            if(valido != 1)
            {
                printf("Error: ¡Ingresa un numero valido!\n");
                
                while(getchar() != '\n'); 
                valido = 0;         
            }
            else if(notas[i] < 0 || notas[i] > 20)
            {
                printf("Error: La nota debe estar entre 0 y 20.\n");
                valido = 0;
            }
            else
            {
                valido = 1;
            }
        }
        while(valido == 0);

        suma += notas[i];
    }

    promedio = suma / 3;
    printf("\n---LISTA--||--RESULTADOS---\n");
    printf("[%.1f] [%.1f] [%.1f]\n", notas[0], notas[1], notas[2]);
    printf("Promedio Final: %.2f - ", promedio);

    if(promedio >= 10)
    {
        printf("APROBADO\n");
    }
    else
    {
        printf("REPROBADO\n");
    }
    return 0;
}
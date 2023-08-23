/*Programa14 Jordy Ventura 202300587 Escribe un programa que muestre un patrón de asteriscos como el siguiente:
*
**
***
****
El número de filas será especificado por el usuario a través de entrada estánda*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int filas = 0;
    printf("Ingrese el numero de filas: ");
    scanf("%i", &filas);

    for (int i = 0; i <= filas; i++)
    {
        for (int l = 0; l < i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}

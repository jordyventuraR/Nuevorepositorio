/* Jordy Ventura 202300587 Escribe un programa que muestre
la tabla de multiplicar de un número ingresado por el
usuario.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int numero = 0, hasta = 0;
    printf("Escribe la tabla de que numero quieres: ");
    scanf("%i", &numero);
    printf("Escribe hasta donde quieres la tabla empezando desde 0: ");
    scanf("%i", &hasta);
    for (int i = 0; i <= hasta; i++)
    {
        printf("\n%i * %i = %i", numero, i, numero * i);
    }
    getch();
    return 0;
}

// Programa7 Jordy Ventura 202300587 Escribe un programa que calcule el factorial de un número ingresado por el usuario.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 0, producto = 1;
    printf("Escribe el numero n de n!: ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        producto = i * producto;
    }
    printf("El factorial de: %i es: %i", n, producto);
    getch();
    return 0;
}

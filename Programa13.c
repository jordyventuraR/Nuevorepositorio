/*Programa13 Jordy Ventura 202300587 Escribe un programa
que determine si un número ingresado por el usuario es par o impar.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    if (numero % 2 == 0)
    {
        printf("Numero par");
    }else{
        printf("Numero impar");
    }
    
    getch();
    return 0;
}

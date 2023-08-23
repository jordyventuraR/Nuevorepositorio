/*Jordy Ventura 202300587 Problema1: Escribe un programa que reciba n cantidad
números enteros por entrada estándar y muestre
su suma o su multiplicación según la elección del usuario.
*/

// Incluye las libreias
#include <stdio.h>
#include <conio.h>

int main()
{
    // Variables
    int Resultados = 0, numero = 0;
    char simbolo = 0, regreso=0;

    while (1)
    {
        printf("\nEscriba un numero: ");
        // En caso de que el dato ingresado no sea un numero da la opcion de regresar a elegir el numero salir
        scanf("%i", &numero);

    // Eleccion de la operacion por el simbolo
    eleccion_de_signo:
        printf("Escriba el signo '+' para sumarlo o el signo '*' para multiplicarlo: ");
        scanf(" %c", &simbolo);
        if (simbolo == '+')
        {
            printf("%i + %i =", numero, Resultados);
            printf("%i", Resultados = numero + Resultados);
        }
        else if (simbolo == '*')
        {
            printf("%i * %i =", numero, Resultados);
            printf("%i", Resultados = numero * Resultados);
        }
        // En caso de colocar un simbolo que no sea el de suma(+) o el de producto(*)
        else
        {
            printf("Simbolo incorrecto desea regresar(R) o pulse cualquier tecla para salir: ");
            scanf(" %c", &regreso);
            if (regreso == 'r' || regreso == 'R')
            {
                goto eleccion_de_signo;
            }
            else{
                printf("Gracias por usar el programa");
                getch();
                return 0;
            }
        }
    }
}

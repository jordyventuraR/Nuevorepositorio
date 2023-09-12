// Programa de C de insersion Jordy Ventura 202300587
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    // Declaracion de variables tipo flotante y la variable pesos como dinamica
    float *pesos, indice;
    // Declaracion de las variables del tipo entero
    int i, j, nest, e;

    printf("Cuantos estudiantes son?: ");
    scanf("%d", &nest);

    // Reserva la memoria de la cantidad de estudiantes
    pesos = (float *)malloc(nest * sizeof(float));

    // En caso de que no se almacene correctamente la memoria dinamica devuelve -1 en la salida para indicar error
    if (pesos == NULL)
    {
        printf("Insuficiente espacio de memoria \n");
        exit(-1);
    }

    // Peticion de los pesos por estudiante de todos los estudiantes
    for (i = 0; i < nest; i++)
    {
        printf("Pesos del estudiante[%d]:", i + 1);
        scanf("%f", &pesos[i]); // Almacena los datos en la misma variable colocando los datos en distintos punteros desde 0 hasta el numero de estudiantes(vector)
    }

    // Impresion del vector pesos* original
    printf("\n***Array original***\n");
    for (i = 0; i < nest; i++)
        printf("Pes[%d]: %.1f\n", i + 1, pesos[i]);

    /*El algoritmo de ordenamiento de insersion donde se inicia desde el segundo dato hasta el numero
    final de numero de datos, es decir el numero de estudiantes, se coloca como variable auxiliar la llamada indice
    con el fin de almacenar el dato del vector original o del vector inicial, se usa la variable j para que sirva
    de punteto de un dato anterior al de e que tambien sirve de puntero, si el dato anterior es menor al dato actual
    donde anterior es j=e-1 y el actual es e siempre tomando que j sea mayor o igual a 0 es decir el analizis inicia en
    el segundo dato del vector, en caso de ser menor el dato anterior al actual, duplica ese valor menor en el dato actual(posicion del vector)
    se le resta 1 a j el j-- hace que el bucle no sea infinito, luego a travez del for se hace que el dato estudiado sea el siguiente
    con el fin de que quede ordenado de menor  a mayor*/
    for (e = 1; e < nest; e++)
    {
        indice = pesos[e];
        j = e - 1;
        while (j >= 0 && pesos[j] < indice)
        {
            pesos[j + 1] = pesos[j];
            j--;
        }
        pesos[j + 1] = indice;
    }

    // Luego se imprime el vector ordenado de la memoria dinamica "pesos"
    printf("\n***Array Ordenado***\n");
    for (i = 0; i < nest; i++)
        printf("Pes[%d]: %.1f\n", i + 1, pesos[i]);

    // Cierre del progragrama
    getch();
    return 0;
}

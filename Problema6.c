/*Problema 6 Jordy Ventura 202300587 Escribe un programa que solicite al usuario un número inicial 
y un número final, y que posteriormente cuente y muestre la cantidad de números pares en el rango dado*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int numi=0, numf=0, par=0;
    printf("Ingrese el numero inicial: ");
    scanf("%i", &numi);

    printf("Ingrese el numero final: ");
    scanf("%i", &numf);

    for (int i=numi; i<=numf; i++)
    {
        if (i % 2 == 0){
            par++;
        }  
    }
    printf("La cantidad de numeros pares es: %i", par);
    
    getch();
    return 0;
}

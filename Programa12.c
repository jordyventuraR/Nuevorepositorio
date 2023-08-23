/*Programa 12 Jordy Ventura 202300587 Problema 12:
Cree una aplicación que muestre la cantidad de kilómetros por litro (salida) en función de la 
cantidad de millas por galón imperial (entrada). Asegúrate de redondear el resultado a dos 
puntos decimales.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    float millas_galon=0, km_L=0;
    printf("Ingrese el numero de millas/galon: ");
    scanf("%f", &millas_galon);
    km_L=millas_galon*(1.609344/4.54609188);
    printf("Los Kilometros por Litro son: %0.2f", km_L);
    getch();
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Declaracion de la libreria con parametro de puntero para memoria dinamica, entero y entero
int BusquedaSecuencial(int *parray, int buscar, int nelem);

//Variable
int main(){
    //Declaracion de variablo
    int *pdatos, nelem, dbuscar, d, result;

    //Guarda los elementos del array
    printf("Cuantos elementos desea en el array?");
    scanf("%d", &nelem);

    //Fija el tamaño del puntero a la cantidad de numero de elementos
    pdatos = (int*) malloc(nelem*sizeof(int));

    //Revision de espacio de memoria en caso de ser insuficiente
    if(pdatos == NULL){
        printf("Insuficiente Espacio de Memoria");
        exit(-1);
    }

    //Guara los datos uno a uno
    for (d = 0; d < nelem; d++){
        printf("Elemento[%d]:", d);
        scanf("%d", (pdatos+d));
    }

    //Guarda la clave
    printf("\n Que elemento desea buscar?");
    scanf("%d", &dbuscar);


    //Guarda lo que devuelve la funcion con parametros del  los datos, la clave, tamaño de la cantidad de datos
    result = BusquedaSecuencial(pdatos, dbuscar, nelem);

    //Si el resultado de la funcion busqueda devuelve -1 significa que no se encontro el elemento
    if(result != -1)
        printf("\n%d Se encuentra en la posicion %d del array.\n", dbuscar, result);
    else
        printf("\n%d No se encontro en el array.\n", dbuscar);

    getch();
    
}


//Algortimo de busqueda secuencial
int BusquedaSecuencial(int *parray, int buscar, int elem){
    int i;
    
    //Busca la clave uno a uno y retorna la posicion cuando lo encuentra
    for(i = 0; i<elem; i++){
        if(*(parray+i) == buscar)
            return(i);
    }
    //Cuando no encuentra el elemento buscado en la lista devuelve -1 de que no esta en la lista
    return(-1);
}

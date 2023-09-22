#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int BusquedaBinaria(int datos[], int nelem, int clave);

int main(){
    int *pdatos, nelem, dbuscar, d, result;

    printf("Cuantos elementos desea en el array?");
    scanf("%d", &nelem);
    pdatos = (int*) malloc(nelem*sizeof(int));

    if(pdatos==NULL){
        printf("Insuficiente espacio de memoria");
        exit(-1);
    }

    for (d = 0; d < nelem; d++){
        printf("Elemento[%d]:", d);
        scanf("%d", (pdatos+d));
    }

    printf("\n Que elemento desea buscar?");
    scanf("%d", &dbuscar);

    result = BusquedaBinaria(pdatos, nelem, dbuscar);

    if(result!=-1)
        printf("\n %d Se encuentra en la posicion %d del array.", dbuscar, result);
    else
        printf("\n%d no se enecontro en el array.\n", dbuscar);

    getch();

}

//Algoritmo de busqueda que recibe como parametro la lista en un puntero el numero de elementos, y el dato a buscar

int BusquedaBinaria(int lista[], int n, int clave){
    //Variables
    int central, bajo, alto; 
    int valorCentral;
    bajo = 0;
    alto = n-1;

    //Asumiendo que la lista esta ordenada mientras el valor del valor como bajo sea menor al alto o igal
    while (bajo <= alto){
        //Centra el valor central
        central = (bajo+alto)/2;    
        valorCentral = lista[central];
        // printf("\n\n%d el valor central actual es.\n\n", central);

        //Si el valor central de la lista es igual a la calve retorna ese valor
        if(clave == valorCentral)
            return(central);
        //Si el dato a buscar es menor al valor del dato central mueve el analizador alto como una posicion antes del central
        else if (clave < valorCentral)
            alto = central-1;
        //Si es el dato de busqueda es mayor al central muebe el analizador por izquierda como una posicion a la derecha
        else
            bajo = central+1;   
    }
    return(-1);
}
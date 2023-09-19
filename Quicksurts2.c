//Programa Quicksurts2
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//El cambio es que recibe como parametros punteros esto para que sea mas eficiente con la memoria
void quicksort(int *izq, int *der);
void Intercambio(int *a, int *b);

int main(){
    int lista[] = {25, 8, 10, 4, 0, 3, 6};
    int i, nelem;
    nelem = sizeof(lista)/sizeof(int);
    //Imprime El vector original 
    printf("\n******ARRAY ORIGINAL******\n--------------------------\n");
    for(i=0; i< nelem; i++)
        printf("Element [%d]: %d \n", i+1, lista[i]);
    //Llama la funcion dandole como parametro del dato 0 de la lista y el dato penultimo
    quicksort(&lista[0], &lista[nelem-1]);
    //Imprime el vector ordenado de manera ascendente
    printf("\n \nARRAY ORDENADO EN FORMATO ASCENDENTE: \n");
    printf("--------------------\n");
    for (i = 0; i < nelem; i++)
        printf("Element [%d]: %d \n", i+1, lista[i]);
    getch();
    return 0;
}

//Algoritmo de manera ascendente
void quicksort(int *izq, int *der){
    if(der < izq)
        return;
    

    int pivot = *izq;
    int *ult = der;
    int *pri = izq;

    while (izq < der){
        while (*izq <= pivot && izq<(der+1))
            izq++;
        while (*der > pivot && der>(izq-1))
            der--;
        if(izq < der)
            Intercambio(izq, der);
    }
    Intercambio(pri, der);
    quicksort(pri, der-1);
    quicksort(der+1, ult);
}

//Realiza el intercambio de los datos 
void Intercambio(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
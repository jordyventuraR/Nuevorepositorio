//Programacion de ordenamiento con algoritmo Quicksort
//Incluye librerias
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Declaracion de funciones con parametros tipo vector de enteros, entero y entero
void quicksort_ascendente(int [], int, int);
void quicksort_descendente(int [], int, int);


int main(){
    //Lista que se va ordenar
    int lista[] = {25, 8, 10, 4, 0, 3, 6}, i, n_elementos;
    //Devuelve la cantidad de elementos que tiene la lista
    n_elementos = sizeof(lista)/sizeof(int);

    //Imprime el numero de elementos que tiene originalmente
    printf("\n******ARRAY ORIGINAL******\n--------------------------\n");
    for(i=0; i< n_elementos; i++)
        printf("%d ", lista[i]);

    //LLama a la funcion que ordena el numero de elementos de manera asendente
    quicksort_ascendente(lista, 0, n_elementos-1);
    //Imprime el vector de manera ordenada ordenada asendentemente
    printf("\n \nARRAY ORDENADO EN FORMATO ASCENDENTE: \n");
    printf("--------------------\n");
    for (i = 0; i < n_elementos; i++)
        printf("%d ", lista[i]);

    //Llama al algoritmo encargado de la lista de manera desendente
    quicksort_descendente(lista, 0, n_elementos-1);

    //Imprime la lista de manera ordenada desendentemente
    printf("\n \nARRAY ORDENADO EN FORMATO DESCENDENTE: \n");
    printf("--------------------\n");
    for (i = 0; i < n_elementos; i++)
        printf("%d ", lista[i]);

    printf("\n \n");   
    getch();
    return 0;     
}

//Algoritmo que ordena de manera ascendente
//Los parametros son la lista, el dato menor es decir el 0 y el superior es el numero de elementos -1
void quicksort_ascendente(int lista[], int inf, int sup){
    //Declaracion de variables
    int mitad, x, izq, der;
    izq = inf;
    der = sup;
    mitad = lista[(izq+der)/2];
    //La mitad es igual al dato medio de la cadena (posicion)
    do{
        //recorre en el vector si no encuentra un dato menor al dato medio  
        //hasta llegar a ese dato medio o al dato mayor al dato medio
        //
        while (lista[izq]<mitad && izq<sup)
            izq++;
        
        //recorre en el vector por derecha es decir de derecha a izquierda y hasta llegar
        //a la mitad del vector o hasta encontrase un dato menor a la mitad
        while (mitad<lista[der] && der>inf)
            der--;
        
        //Si la cantidad recorrida por la izquierda es menor o igual al de la derecha
        if(izq <= der){
            //Cambia las posiciones el dato que se capturo en la izquierda por el que se capturo por derecha
            x = lista[izq];
            lista[izq] = lista[der];
            lista[der] = x;
            //Avanza una posicion para la derecha para el analizis de la izquierda y 
            //uno a la izquierda para el analisis a a la derecha
            izq++;
            der--;
        }
    }while (izq <= der);
    //se sale del bucle al realizar un cambio en la cadena

    //Hace la recursion para  en caso de que el lo recorrido de derecha a izquierda se mayor a 0 la posicion inicial
    if (inf<der)
        //Recibe como parametros la lista, el dato inferior, y la derecha "actual"
        quicksort_ascendente(lista, inf, der);
    //En caso de que lo recorrido de izquierda a derecha sea menor a el dato superior
    if (izq < sup)
        //Recibe como parametros la lista, "La izquierda" y el dato superior
        quicksort_ascendente(lista, izq, sup);
}

//Algoritmo que ordena de manera desendente
void quicksort_descendente(int lista[], int inf, int sup){
    int mitad, x, izq, der;
    izq = inf;
    der = sup;
    mitad = lista[(izq+der)/2];

    do{
        //Lo que cambia es el signo de menor a mayor ya que aqui avanza de izquierda a derecha 
        //si el dato de la izquierda es menor al dato de la mitad
        while (lista[izq]>mitad && izq<sup)
            izq++;
        
        //Lo que cambia es el signo de menor a mayor
        while (mitad>lista[der] && der>inf)
            der--;
        
        if(izq <= der){
            x = lista[izq];
            lista[izq] = lista[der];
            lista[der] = x;
            izq++;
            der--;
        }
    }while (izq <= der);

    if (inf<der)
        quicksort_descendente(lista, inf, der);
    if (izq < sup)
        quicksort_descendente(lista, izq, sup);
}
//Programa97 con uso de vectores y de funciones
#include <stdio.h>
#include<conio.h>

void cargar(int mice[6]){
    for (int i=1; i<=5; i++){
        printf("Ingrese el dato %i: ", i);
        scanf("%i", &mice[i]);
    }  
}

void imprimir(int mice[6]){
    for (int i=0; i<=6; i++){
        printf("%i", mice[i]);
    }  
}

int main() {
    //Variables
    int mice[6];

    //Llamado de funciones
    cargar(mice);
    imprimir(mice);
    printf("micelogia");

    return 0;
}

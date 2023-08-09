#include<stdio.h>        //Libreria de IO standar
#include<conio.h>        //Libreria para el getch
#include<stdlib.h>       //Libreria para el sistema

int main()
{
    
    double num1, num2;
    system("cls");        //Borro de linea  para SO windows
    
    printf("Ingrese el primer numero: ");
    if(scanf("%lf", &num1) != 1){
        printf("Ingrese un numero error valido");
        getch();
        return 1;
    }

    printf("Ingrese el segundo numero: ");
    if(scanf("%lf", &num2) != 1){
        printf("Ingrese un numero error valido");
        getch();
        return 1;
    }

    double suma=num1+num2;
    double diferencia=num1-num2;
    double producto=num1*num2;

    if (num2==0){
        printf("Error no se puede dividir en cero");
        getch();
        return 1;
    }

    double division=num1/num2;

    printf("\nSuma: %0.4lf\n",     suma);
    printf("\nResta: %0.4lf\n",    diferencia);
    printf("\nProducto: %0.4lf\n", producto);
    printf("\nDivision: %0.4lf\n", division);

    getch();              //Pausa el sistema para cerrar
    return 0;
}


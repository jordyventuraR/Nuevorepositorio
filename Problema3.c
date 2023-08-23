/*Programa3 Escribe un programa que cuente y muestre la cantidad de caracteres
en una cadena de texto ingresada por el usuario.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char caracteres[100];
    int caracter=0, letras=0, palabras=1, blancos=0, palabra=0;

    //Inicializar en cero el vector
    for (int i=0; i<100; i++){
        caracteres[i]=0;
    } 

    printf("Escriba la cadena de texto: ");
    fgets(caracteres, sizeof(caracteres), stdin);
    

    //Evaluacion de caracteres y letras
    for (int i=0; i<100; i++)
    {
        if (caracteres[i] >= 32  &&  caracteres[i] <= 126)
        {
            caracter++;
            if (caracteres[i]>=65 && caracteres[i]<=122){
                if (palabras==1)
                {
                    palabra++; 
                }  
                letras++;
                palabras=0;
                }else if (caracteres[i]==32){
                    palabras=1;
                    blancos++;  
                }           
        }
    }

    printf("La cantidad de caracteres es: %i", caracter);
    printf("\nLa cantidad de letras es: %i", letras);
    printf("\nLa cantidad de palabras es: %i", palabra);
    printf("\nLa cantidad de espacios: %i", blancos);
    getch();
    return 0;
}

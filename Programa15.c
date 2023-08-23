/*Programa15  Jordy Ventura 202300587 Crea un programa en C que realice una encriptación César simple en un mensaje. La 
encriptación César consiste en desplazar cada letra del mensaje original un número fijo de 
posiciones en el alfabeto. Por ejemplo, si el número fijo es 3, la letra 'A' se convierte en 'D', 
'B' en 'E', y así sucesivamente.
El programa debe solicitar al usuario que ingrese un mensaje de texto en mayúsculas (sin 
espacios ni caracteres especiales). Luego, debe solicitar al usuario un número fijo de 
desplazamiento. Finalmente mostrar el mensaje encriptado utilizando la técnica César*/
#include<stdio.h>
#include<conio.h>

int main()
{
    char vector[100]={};
    char letra=0;
    int i=0, n=0, distancia=0;

    char encriptada[100]={};
    char retono[100]={};

    for (int i = 0; i <n; i++)
    {
        retono[i]=0;
        encriptada[i]=0;
    } 

    printf("Ingrese el mensaje en mayusculas sin caracteres especiales:\n ");
    fgets(vector, sizeof(vector), stdin);
    n = sizeof(vector) / sizeof(vector[0]);

    for (int i = 0; i < n; i++)
    {
        printf(" %c", vector[i]);
    }

    clave:
    printf("\nIngrese c para clave(c) de encriptacion o la letra(l) para Fijar el desplazamiento:\n ");
    scanf(" %c", &letra);
    if (letra=='c' || letra=='C')
    {
        printf("Ingrese el numero clave: ");
        scanf("%i", &distancia);
        printf("%i", distancia);
    }else if (letra=='l' || letra=='L')
    {
        printf("Ingrese la letra clave: ");
        scanf(" %c", &letra);
        if (letra>=97)
        {
            letra=letra-32;
        }
        printf("%c", letra);
        distancia=letra-65;
    }else{
        printf("La opcion no es correcta, escoja c(numero entero positivo) o l(letra y su posicion representa la clave) para fijar la clave: ");
        goto clave;
    }

    //Encriptacion
    for (int i = 0; i < n; i++)
    {
        encriptada[i]=vector[i]+distancia;
        if (encriptada[i]>90)
        {
            encriptada[i]=vector[i]-distancia;
            encriptada[i]=64+(distancia-(90-vector[i])); 
        }else{
            encriptada[i]=encriptada[i];
        }
    }

    //Muestra el mensaje encriptado
    printf("\nEl mensaje encriptado es: ");
    for (int i = 0; i <(n-1); i++)
    {
        printf(" %c", encriptada[i]);
    }

    //Desencriptacion
    for (int i = 0; i < n; i++)
    {
        
        int distanciaA=0;
        retono[i]=encriptada[i]-distancia;
        if (retono[i]<65)
        {
            distanciaA=encriptada[i]-65; 
            if (distanciaA<distancia)
            {
                retono[i]=encriptada[i]+distancia;
                retono[i]=(90-(distancia-distanciaA))+1;
            } 
        }else{
            encriptada[i]=encriptada[i];
        }
    }

    //Muestra el mensaje desencriptado
    printf("\nEl mensaje desencriptado es: ");
    for (int i = 0; i <(n-1); i++)
    {
        printf(" %c", retono[i]);
    }
    printf("\n");
    printf("\nGracias");
    
    //Cierre
    getch();
    return 0;
}

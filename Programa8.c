/*Programa8 Jordy Ventura 202300587 Dada una cadena, debe devolver una cadena en la que cada
carácter (sensible a mayúsculas
y minúsculas) se repite una vez.
Ejemplos:
• “Hola” → “HHoollaa”
• “usac” → “uussaacc”
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    char caracteres[30];
    char cadena[60];
    int l = 0;

    // Inicializar en cero
    for (int i = 0; i <30; i++)
    {
        caracteres[i] = 0;
        cadena[i] = 0;
    }

    printf("Ingresa la cadena de texto: ");
    fgets(caracteres, sizeof(caracteres), stdin);
    
    for (int i = 0; i <30; i++)
    {
        cadena[l] = caracteres[i];
        printf("%c", cadena[l]);
        l++;
        cadena[l] = caracteres[i]; 
        printf("%c", cadena[l]);
    }
    getch();
    return 0;
}

/*Programa11 Jordy Ventura 202300587  Defina una función que elimine los duplicados
de una matriz de números no negativos y los  devuelva como resultado. El orden de la
secuencia tiene que permanecer igual.*/
#include <stdio.h>
#include <conio.h>
int eliminar(int malla[], int longitud, int numero)
{
    int l = 0, s = 0;
    int matriz[8] = {};
    for (int i = 0; i < longitud; i++)
    {
        l++;
        if (malla[i] == malla[l] && (malla[i]>0 || malla[l]>0))
        {
        }
        else
        {
            
            matriz[s] = malla[i];
            s++;
        }
    }
    return matriz[numero];
}

int main()
{
    int vector[] = {1, 3, 8, 8, 2, 3, 4, 1};
    int n = 0;
    n = sizeof(vector) / sizeof(vector[0]);
    for (int i = 0; i < (n-1); i++)
    {
        printf("%i, ", eliminar(vector, n, i));
    }

    getch();
    return 0;
}

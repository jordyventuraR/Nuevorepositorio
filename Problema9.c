// Problema 9 Jordy Ventura 202300587 Escribe un programa que muestre los primeros N términos de la serie de Fibonacci.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 10, l = 1, r = 1, p = 0; // n es hasta el numero n
    int vector[10] = {0, 1, 1, 2};   // 10 son los primeros 10 diguitos tiene que ser igual a n
    for (int i = 2; i < n; i++)
    {
        l = 1 + i; // 1 + que i
        r = l + 1; // 1 + que l
        vector[r] = vector[i] + vector[l];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", vector[i]);
    }

    getch();
    return 0;
}

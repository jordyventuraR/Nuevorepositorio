/*Problema 4 Jordy Ventura 202300587 Determine el seno de un ángulo 
ingresado por el usuario a partir de su serie de Taylor:*/
#include<stdio.h>
#include<conio.h>
float potencia(float base, int exponente){
    float basep=1;
    for (int i = 0; i < exponente; i++)
    {
        basep=basep*base;
    }
    return basep;
}

float factorial(int factorio){
    float producto=1;
    for (int i = 1; i <= factorio; i++)
    {
        producto=producto*i;
    }
    return producto;
    
}

int main()
{
    float angulo=0, seno=0.0, sumando=0;
    int infinito=0;
    printf("Ingrese el valor de angulo: ");
    scanf("%f", &angulo);
    printf("Cual sera su 'Infinito' (El valor donde hasta llegue n entre mas alto mas preciso sera y se un valor entero): ");
    scanf("%i", &infinito);

    for (int n = 0; n<=infinito; n++)
    {
        sumando=(float)(potencia(-1, n)/factorial(2*n+1))*potencia(angulo, (2*n+1));
        seno=sumando+seno;
    }

    printf("\n El seno segun la serie de tylor es: %f", seno);
    getch();
    return 0;
}


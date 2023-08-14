//Programa de calculadora como switch
#include<stdio.h>
#include<conio.h>

int main()
{
    int op=0, uno=0, dos=0;
    

    do
    {
        printf("--------Calculadora-----------");
        printf("\nQue desea hacer: \n");
        printf("\n(1) Sumar: \n");
        printf("\n(2) Restar: \n");
        printf("\n(3) Multiplicar: \n");
        printf("\n(4) Dividir: \n");
        printf("\n(5) Salir: \n");
        scanf("%i", &op);

        switch (op)
        {
        //Suma
        case 1:
            printf("\nSumar\n");
            printf("Introdusca los numeros separados por comas: ");
            scanf("%d, %d", &uno, &dos);
            printf("%d + %d = %d\n", uno, dos, (uno+dos));
            break;
        //Resta
        case 2:
            printf("\nRestar\n");
            printf("Introdusca los numeros separados por comas: ");
            scanf("%d, %d", &uno, &dos);
            printf("%d - %d = %d\n", uno, dos, (uno-dos));
            break;
        //Producto
        case 3:
            printf("\nMultiplicar\n");
            printf("Introdusca los numeros separados por comas: ");
            scanf("%d, %d", &uno, &dos);
            printf("%d * %d = %d\n", uno, dos, (uno*dos));
            break;
        //Division
        case 4:
            printf("\nDividir\n");
            printf("Introdusca los numeros separados por comas: ");
            scanf("%d, %d", &uno, &dos);
            printf("%d /  %d = %0.2ld\n", uno, dos, (double)(uno/dos));
            break;
        //Salir
        case 5:
            printf("Salir");
            break;
        //Opcion no valida
        default:
            printf("Opcion no valida");
            break;
        }
    } while (op!=5);
    getch();
    return 0;
}

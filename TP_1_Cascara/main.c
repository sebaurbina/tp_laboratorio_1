#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a,b;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
                break;

            case 2:
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
                break;

            case 3:
            printf("La suma de %.2f y %.2f es: %.2f\n", a, b, suma(a, b));
            system("pause");
                break;

            case 4:
            printf("La resta de %.2f y %.2f es: %.2f\n", a, b, resta(a, b));
            system("pause");
                break;

            case 5:
                if(b==0){
                    printf("Error. No se puede dividir por cero\n");
                }
                else{
                    printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
                }
            system("pause");
                break;

            case 6:
            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", a, b, multiplicar(a, b));
            system("pause");
                break;

            case 7:
                if(a<=0)
                {
                    printf("Error. No se puede sacar el factorial de un numero negativo o cero\n");
                }
                else{
                    printf("El factorial de %.2f es: %.2f\n", a, factorial(a));
                }
            system("pause");
                break;

            case 8:
            printf("La suma de %.2f y %.2f es: %.2f\n", a, b, suma(a, b));

            printf("La resta de %.2f y %.2f es: %.2f\n", a, b, resta(a, b));

            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", a, b, multiplicar(a, b));

            if(b==0){
                    printf("Error. No se puede dividir por cero\n");
                }
                else{
                    printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
                }

            if(a<=0)
                {
                    printf("Error. No se puede sacar el factorial de un numero negativo o cero\n");
                }
                else{
                    printf("El factorial de %.2f es: %.2f\n", a, factorial(a));
                }

            system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
}

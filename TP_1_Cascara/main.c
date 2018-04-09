#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
* 1 Trabajo práctico No 1
* 1.1 Descripción
* Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
* 1. Ingresar1eroperando(A=x)
* 2. Ingresar2dooperando(B=y)
* 3. Calcularlasuma(A+B)
* 4. Calcularlaresta(A-B)
* 5. Calcularladivision(A/B)
* 6. Calcularlamultiplicacion(A*B)
* 7. Calcularelfactorial(A!)
* 8. Calculartodaslasoperaciones
* 9. Salir
* • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte, que contenga las funciones para realizar
* las 4 operaciones.
* • En el menú deberán aparecer los valores actuales cargados en los operandos A y B (donde dice “x” e “y” en el ejemplo, se debe mostrar
* el número cargado)
* • Deberán contemplarse los casos de error (división por cero, etc)
* • Documentar todas las funciones
*/

int main()
{
    char seguir='s';
    int opcion=0;
    float a, b;

    float suma(float a, float b); // Funcion sumar dos numeros
    float resta(float a, float b); // Funcion restar dos numeros
    float division(float a, float b); // Funcion division dos numeros
    float multiplicacion(float a, float b); // Funcion multiplicacion dos numeros

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIntroduce a: ");
                scanf("%f",&a);
                break;
            case 2:
                printf("\nIntroduce b: ");
                scanf("%f",&b);
                break;
            case 3:
                float suma(float a, float b);
                printf("La suma de %.2f y %.2f es: %.2f\n\n", a, b, suma(a, b));
                break;
            case 4:
                float resta(float a, float b);
                printf("La resta de %.2f y %.2f es: %.2f\n\n", a, b, resta(a, b));
                break;
            case 5:
                float division(float a, float b);
                printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
                break;
            case 6:
                float multiplicacion(float a, float b);
                printf("La multiplicacion de %.2f y %.2f es: %.2f\n\n", a, b, multiplicar(a, b));
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}

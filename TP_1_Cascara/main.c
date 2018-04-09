#include <stdio.h>
#include <stdlib.h>

void menu(); // Menu de opciones
float suma(float a, float b); // Funcion sumar dos numeros
float resta(float a, float b); // Funcion restar dos numeros
float multiplicar(float a, float b); // Funcion multiplicar dos numeros
float dividir(float a, float b); // Funcion dividir dos numeros
float factorial(float a); // Funcion para sacar factorial

void main() {
  int opcion;
  float a, b;
  char c;

  do {
    menu();
    scanf("%d",&opcion);
    switch(opcion) {
        case 1:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
            printf("La suma de %.2f y %.2f es: %.2f\n", a, b, suma(a, b));
            break;
        case 2:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
            printf("La resta de %.2f y %.2f es: %.2f\n", a, b, resta(a, b));
            break;
        case 3:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", a, b, multiplicar(a, b));
            break;
        case 4:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
            if(b==0){
                printf("No se puede dividir por cero");
            }
            else{
            printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
            }
            break;
        case 5:
            printf("\nIntroduce numero para sacar el factorial: ");
            scanf("%f", &a);
            printf("El factorial de %.2f es: %.2f\n", a, factorial(a));
            break;
        case 6:
            printf("\nIntroduce primer operando: ");
            scanf("%f", &a);
            printf("\nIntroduce segundo operando: ");
            scanf("%f", &b);
            printf("La suma de %.2f y %.2f es: %.2f\n", a, b, suma(a, b));
            printf("La resta de %.2f y %.2f es: %.2f\n", a, b, resta(a, b));
            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", a, b, multiplicar(a, b));
            printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
            printf("El factorial de %.2f es: %.2f\n", a, factorial(a));
            break;
      case 9: break;
      default:
        printf("\nIntroduce una opcion valida...");
    }
  } while (opcion != 9);
}

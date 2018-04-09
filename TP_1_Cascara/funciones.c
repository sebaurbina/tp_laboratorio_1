#include <stdio.h>
#include <stdlib.h>

void menu() {
  printf ("\nIntroduce una de las siguientes opciones:\n");
  printf ("1.- Sumar\n");
  printf ("2.- Restar\n");
  printf ("3.- Multiplicar\n");
  printf ("4.- Dividir\n");
  printf ("5.- Factorial\n");
  printf ("0.- Salir\n");
  printf ("Opcion: ");
}

float suma(float a, float b) {
    float suma;
    suma = a + b;
    return suma;
}

float resta(float a, float b) {
    float resta;
    resta = a - b;
    return resta;
}

float multiplicar(float a, float b) {
    float multiplicacion;
    multiplicacion = a * b;
    return multiplicacion;
}

float dividir(float a, float b) {
    float division;
    division = a / b;
    return division;
}

float factorial(float a) {
    float resultado;
    if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);
}

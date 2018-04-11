#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \param a float
 * \param b float
 * \return float
 *
 */
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

    if(b==0)
    {
        printf("Error. No se puede dividir por cero");
    }
    else
    {
        return multiplicacion;
    }
}

float dividir(float a, float b) {
    float division;
    division = a / b;
    return division;
}

float factorial(float a) {
    float resultado;
    if(a<=0)
    {
         printf("Error. No se puede sacar el factorial de un numero negativo");
    }
    else if(a>0)
    {
        if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);
    }

}


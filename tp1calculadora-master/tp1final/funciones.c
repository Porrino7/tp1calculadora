
#include "funciones.h"



/** \brief Realiza la suma de dos numeros enteros.
 *
 * \param Pide el primer numero entero para operar.
 * \param Pide el segundo numero entero para operar .
 * \return Retorna un numero entero luego de realizar la operacion.
 *
 */
int suma(int a, int b)
{
    int resultado;

    resultado = a + b;

    return resultado;
}

/** \brief Realiza la resta de dos numeros en enteros.
 *
 * \param Pide el primer numero entero para operar.
 * \param Pide el segundo numero entero para operar.
 * \return Retorna un numero entero luego de realizar la operacion.
 *
 */
int resta(int a, int b)
{

    int resultado;
    resultado= a - (b);

    return resultado;
}

/** \brief Realiza una multiplicacion entre dos enteros.
 *
 * \param Pide el primer numero entero para operar.
 * \param Pide el segundo numero entero para operar.
 * \return Retorna un numero entero luego de realizar la operacion.
 *
 */
int multiplicacion( int a, int b)
{

    int resultado;
    resultado= a * b;

    return resultado;
}

/** \brief Realiza la division de dos numeros enteros.
 *
 * \param Pide el primer numero entero para operar.
 * \param Pide el segundo numero entero para operar.
 * \return Retorna un numero flotante luego de la operacion.
 *
 */
float division(int a, int b)
{float resultado;
 if ( a == 0 ||  b == 0){
    printf("error no puede dividir por 0");
 }
 else{

    resultado=(float) a / b;


    return resultado;}
}

/** \brief Realiza el factorial de un numero.
 *
 * \param Pide un numero entero para operar .
 * \return Retorna un numero long luego de realizar la operacion.
 *
 */
long int factorial(int a)
{

    long factorial=1;
    int i;

    for(i=a; i>=1; i--)
    {
    while( a == 0 ){
     factorial = 1;
    }
        factorial=factorial * i;
    }
    return factorial;
}

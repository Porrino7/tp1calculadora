#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
// Calculadora de Sebastian Exequiel Porrino 1G.
// TARDA EN CARGAR LA CALCULADORA SE QUEDA PANTALLA NEGRA UNOS SEGUNDOS.
int main()
{


    int opciones;
    int operando1;// NUMERO 1 A PEDIR
    int operando2;// NUMERO 2 A PEDIR
    int flag =0;// VALIDAR NUMERO UNO
    int flag2=0; // VALIDAR NUMERO DOS
    int sumar;
    int restar;
    float dividir;
    int multiplicar;
    long factor1;
    long factor2;
    int flagoperanciones=0; // BANDERA PARA LAS OPERACIONES
    int flagopcion=0;// BANDERA PARA LAS OPCIONES
    int exi=0; // EXI SERIA EXIT PERO ME LO DABA COMO FUNCION POR ESE MOTIVO LO ESCRIBI ASI
    do
    {

        fflush(stdin);
        printf ("Seleccione una opcion\n");
        if (flag==1){
            printf("1. Ingrese primer operando: A= %d\n",operando1);
        }
        else
        {
            printf("1. Ingrese primer operando\n");
        }
        if(flag2==1)
        {
            printf("2. Ingrese segundo operando: B= %d\n",operando2);
        }
        else
        {
            printf("2. Ingrese segundo operando\n");
        }
        printf("3. Calcular operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. salir\n");
        printf("Seleccione una opcion: ");

        flagopcion=scanf("%d",&opciones);


        switch(opciones)
        {
        case 1:
            printf("Ingrese primer operando: ");
            flag=scanf("%d",&operando1);
            flagoperanciones=0;
            fflush(stdin);
            while(flag!=1)
            {
                printf("incorrecto, ingrese primer operando: ");
                fflush(stdin);
                flag=scanf("%d",&operando1);
            }

            break;

        case 2:
            if(flag==1)
            {
                printf("Ingrese segundo operando: ");
                flag2=scanf("%d",&operando2);
                fflush(stdin);
                while(flag2!=1)
                {
                    printf("incorrecto, ingrese segundo operando: ");
                    fflush(stdin);
                    flag2=scanf("%d",&operando2);
                }
            }
            else
            {
                printf("Primero ingrese operando 1\n");
            }

            break;

        case 3:
            if(flag2==1 && flag==1)
            {

                sumar=suma(operando1,operando2);
                restar=resta(operando1,operando2);
                dividir=division(operando1,operando2);
                multiplicar=multiplicacion(operando1,operando2); //ESTAS SON LAS OPERACIONES
                factor1=factorial(operando1);
                factor2=factorial(operando2);
                printf("Operaciones realizadas\n");
                flagoperanciones=1;
            }
            else
            {
                printf("Error, no se ingreso operandos\n");
            }

            break;

        case 4:
            if(flag2==1 && flag==1)
            {
                if(flagoperanciones==1)
                {
                    fflush(stdin);
                    printf("El resultado de A+B es: %d\n",sumar);
                    printf("El resultado de A-B es: %d\n",restar); // ESTO ES PARA MOSTRAR LAS OPERACIONES ANTES REALIZADAS
                    printf("El reultado de A/b es: %.2f\n",dividir);
                    printf("El resultado de A*B es: %d\n",multiplicar);
                    printf("El factorial de A es: %ld y El factorial de B es: %ld\n",factor1,factor2);

                }
                else if(flagoperanciones==0)
                {
                    printf("Primero acceda a la opcion 3 para poder operar\n");
                }
            }
            else
            {
                printf("Primero acceda a la opcion 3 para poder operar\n");
            }
            break;

        case 5:
            exi=1; // OPCION PARA SALIR DE LA CALCULADORA
            break;

        default:
            if(flagopcion!=1)
            {
                printf("Opcion incorrecta.\n");
            }
            else
            {
                printf("Opcion incorrecta.\n");
            }
            break;
        }
        system("pause");
        system("cls");

    }
    while(exi!=1);

    return 0;
}

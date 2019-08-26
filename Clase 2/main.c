#include <stdio.h>
#include <stdlib.h>
/**
pesos 505
libra 50
dolar -500
bitcoin 88
pesos 100
*/
int main()
{
    int dinero;
    int dolaresMax;
    char tipo; // Peso, Dolar, Libra, Bitcoin
    int i;
    int flag=0,flag2=0;
    float promedio;
    int acumulador=0;
    int contadorP=0;
    int porcentaje=5;
    int cantidad=0;
    float resultado;

    for(i=0; i<5; i++)
    {

        printf("Ingrese tipo (Peso,Dolar,Libra,Bitcoin): ");
        scanf("%c",&tipo);
        while(tipo!='p' && tipo!='d' && tipo!='b' && tipo!='l')
        {
            printf("\nERROR. Reingrese tipo (Peso,Dolar,Libra,Bitcoin): ");
            fflush(stdin);
            scanf("%c",&tipo);

        }

        printf("ingrese cantidad: ");
        scanf("%d",&dinero);

        fflush(stdin);

        system("cls");

        if(tipo=='d')
        {
            flag=1;
            cantidad++;
            dolaresMax=dinero;

            if(dinero > dolaresMax)
            {
                dolaresMax=dinero;
            }

        }

        if(tipo=='p')
        {
            flag2=1;
            contadorP++;
            acumulador+=dinero;

        }
        /*  int porcentaje = 5;
            int cantidad = 100;
            float resultado = cantidad * porcentaje / 100.0;
            printf ("Resultado a dos decimales: %.2f\n", resultado); */
    }

    promedio=(float)acumulador/contadorP;//Casteo Explicito
    // int x =9; float y;  y=x; Casteo Implicito. convertir de algo que tiene menor precicion a algo qtiene mayor presicion
    // int x; float=9.7; x=y; Casteo Implicito.

    if(flag==1)
    {
        printf("\nel maximo importe en dolares: %d\n",dolaresMax);
    }

    if(flag2==1)
    {
        printf("\n\nEl promedio de pesos es: %.2f\n",promedio);
        resultado= (cantidad*100.0)/porcentaje;
        printf("\n\n El porcentaje de pesos es de: %.2f\n",resultado);
    }










    return 0;
}

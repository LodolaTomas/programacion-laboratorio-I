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

    for(i=0;i<5;i++){

        printf("Ingrese tipo (Peso,Dolar,Libra,Bitcoin): ");
        scanf("%c",&tipo);

        printf("ingrese cantidad: ");
        scanf("%d",&dinero);

        fflush(stdin);

        system("cls");

        if(tipo=='d'){
            flag=1;
            dolaresMax=dinero;

        if(dinero > dolaresMax){
            dolaresMax=dinero;
        }
        }

        if(tipo=='p'){
                flag2=1;
            contadorP++;
            acumulador+=dinero;
            promedio=(float)acumulador/contadorP;
        }

    }

    if(flag==1)
    {
        printf("\nel maximo importe en dolares: %d\n",dolaresMax);
    }
    if(flag2==1){
        printf("\n\nEl promedio de pesos es: %.2f\n\n",promedio);
    }










    return 0;
}

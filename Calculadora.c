#include <stdio.h>
#include <stdlib.h>

void SOMAR()
{
    float NUM1, NUM2;//var local
    printf("Informe dois numeros\n");
    scanf("%f %f",&NUM1, &NUM2);
    printf("%.1f + %1.f = %.1f\n", NUM1, NUM2, NUM1+NUM2);
}

void SUBTRAIR()
{
    float NUM1, NUM2;//var local
    printf("Informe dois numeros\n");
    scanf("%f %f",&NUM1, &NUM2);
    printf("%.1f - %1.f = %.1f\n", NUM1, NUM2, NUM1-NUM2);
}

void MULTIPLICAR()
{
    float NUM1, NUM2;//var local
    printf("Informe dois numeros\n");
    scanf("%f %f",&NUM1, &NUM2);
    printf("%.1f * %1.f = %.1f\n", NUM1, NUM2, NUM1*NUM2);
}

void DIVIDIR()
{
    float NUM1, NUM2;//var local
    printf("Informe dois numeros\n");
    scanf("%f %f",&NUM1, &NUM2);
    printf("%.1f / %1.f = %.1f\n", NUM1, NUM2, NUM1/NUM2);
}

int main()
{
    char OPCAO;//var local
    printf("Escolha a operacao que deseja:\n\t+ somar\n\t- subtrair\n\t* multiplicar\n\t/dividir\n");
    fflush(stdin);
    scanf("%c",&OPCAO);
    switch(OPCAO)
    {
            case '+':
                SOMAR();
                break;
            case '-':
                SUBTRAIR();
                break;
            case '*':
                MULTIPLICAR();
                break;
            case '/':
                DIVIDIR();
                break;
            default:
                printf("Voce informou uma operacao invalida!\n\n");
    }
 	return 0;
}
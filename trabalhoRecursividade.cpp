#include <stdio.h>
#include <stdlib.h>
#define TAM 100

    void exercicio_b();/*Devolver o n-´esimo n´umero de Fibonacci (pesquise como se define os casos bases e os
						recursivos).*/
						
    void exercicio_c();// Dado n ? N, imprimir n´umeros pares que incidem no intervalo [0, n]
    
    void exercicio_f();//Dado n ? N, devolver o produto dos n´umeros pares que incidem no intervalo [1, n].
    
    void exercicio_h();//Imprimir os elementos de um vetor do ´ultimo ao primeiro
     
    int fibonacci();
    int pares();
    int produto();
    void vetor_add();
    void imprimir();
        int main(void)
            {
                char letra;
                printf("informe uma letra: (b,c,f,h)\n");
                scanf(" %c", &letra);
                switch(letra)
                    {
                        case 'b': exercicio_b();
                            break;
                        case 'c': exercicio_c();
                            break;
                        case 'f': exercicio_f();
                            break;
                        case 'h': exercicio_h();
                            break;
                    }
                system("pause");
                return 0;
            }

            void exercicio_b()
        {
            int valor;
            printf("digite um numero de uma posicao na sequencia de fibonacci, ex: n=3 resultado=2 \n");
            scanf("%d", &valor);
            printf("o termo numero %d da sequencia eh %d\n", valor, fibonacci(valor));


        }
            int fibonacci(int valor){
                if(valor<=2)
                    return 1;
                return (fibonacci(valor-1) + fibonacci(valor-2));
            }
            void exercicio_c()
            {
                int n;
                printf("Escreva um valor para n\n");
                scanf("%d", &n);
                pares(n);
            }
            int pares(int valor)
            {
                if(valor%2==0)
                    printf("%d;\n", valor);
                if(valor==0)
                    return 0;
                return pares(valor-1);
            }
            void exercicio_f()
            {
                int n;
                printf("Escreva um valor para n\n");
                scanf("%d", &n);
                printf("O produto dos numeros pares de 1 ate %d eh %d\n",n, produto(n));
            }
            int resultado=1;
            int produto(int numero)
            {   
                
                if(numero%2==0)
                    resultado=resultado* numero;
                  
                if(numero==1)
                    return resultado;
                    
                produto(numero-1);
                                        
            }
            
            void   exercicio_h()
            {
                int tamanho,v[TAM];
                printf("informe um valor para a quantidade de elementos de um vetor. (max 100)\n");
                scanf("%d", &tamanho);
                vetor_add(tamanho, v);
            
            }
                int i=0;
            void vetor_add(int tamanho, int v[TAM])
            {
                
                if(tamanho>i){
                printf("informe um valor para o vetor na posicao %d \n", i+1 );
                scanf("%d", &v[tamanho-i]);
                i++;
                
                vetor_add(tamanho, v);
                }
                imprimir(tamanho, v);
                
                
                
            }
            void imprimir(int tam, int v[TAM])
            {   
                
                if(tam>0){
                printf("%d\n", v[i]);
                i++;
                }
              
                imprimir(tam-1, v);
            }

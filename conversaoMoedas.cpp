#include <stdlib.h>
        #include <stdio.h>

        int main(void)
        {
        float real, dolar, cotacao, tipo, i=1, valor, resultado;
        int escolha ,escolha2;
        while(i==1)
		{
	        printf("--| Escolha moeda inicial |--\n");
	        printf("\t1-REAL\n\t2-DOLAR\n\t3-EURO\n");
	        scanf("%d", &escolha);
	    	switch(escolha)
	    	{
	    		case 1:
	                {
	                printf("Digite o valor para converter:\n");
	                scanf("%f", &valor);
	                printf("Escolha para qual moeda deseja converter\n");
	                printf("\t1-DOLAR\n\t2-EURO\n");
	                scanf("%d", &escolha2);
	                    if(escolha2==1)
	                        {
	                            resultado=valor*0.18;
	                            printf("%.2f DOLARES\n", resultado);
	                            printf("---------------------------------------------------------\n");
	                        }
	
	                    else if(escolha2==2)
	                            {
	                            resultado=valor*1/6.5;
	                            printf("%.2f EUROS\n", resultado);
	                            printf("---------------------------------------------------------\n");
	                            }
	                    else 
	                    	printf("o valor informado eh incorreto!\n");
	            break;
	                }
	            case 2:
	            	{
	            		printf("Digite o valor para converter:\n");
                		scanf("%f", &valor);
                		printf("Escolha para qual moeda deseja converter\n");
                		printf("\t1-REAL\n\t2-EURO\n");
                		scanf("%d", &escolha2);
                			if(escolha2==1)
                			{
                				resultado=valor*5.64;
                            	printf("%.2f REAIS\n", resultado);
                            	printf("---------------------------------------------------------\n");
							}
							else if (escolha2==2)
							{
								resultado=valor*0.88;
                            	printf("%.2f EUROS\n", resultado);
                            	printf("---------------------------------------------------------\n");
							}
							else 
	                    		printf("o valor informado eh incorreto!\n");
	            break;
					}
							
	            case 3:
	            	{
	            		printf("Digite o valor para converter:\n");
		                scanf("%f", &valor);
		                printf("Escolha para qual moeda deseja converter\n");
		                printf("\t1-REAL\n\t2-DOLAR\n\t");
		                scanf("%d", &escolha2);
		                	if(escolha2==1)
							{
								resultado=valor*(6.5);
                            	printf("%.2f REAIS\n", resultado);
                            	printf("---------------------------------------------------------\n");
							}
							else if(escolha2==2)
							{
								resultado=valor*1.136;
                            	printf("%.2f DOLARES\n", resultado);
                            	printf("---------------------------------------------------------\n");
							}
							else 
	                    		printf("o valor informado eh incorreto!\n");
	                    		
	            break;
					}
				default:{
					printf("Valor informado incorreto!\n");
					printf("---------------------------------------------------------\n");
					}
				
			}
		}
	        
        
        

        
        
        system("pause");
        return 0;
        
    	}
